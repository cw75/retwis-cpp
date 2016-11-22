#include <zmq.hpp>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <unistd.h>
#include <map>
#include "message.pb.h"

using namespace std;

// Helper function to parse user input from command line
void split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
}

void process(communication::Request &request, communication::Response &response, zmq::socket_t &requester) {
	string data;
	request.SerializeToString(&data);

	zmq_msg_t msg;
	zmq_msg_init_size(&msg, data.size());
	memcpy(zmq_msg_data(&msg), &(data[0]), data.size());
	zmq_msg_send(&msg, static_cast<void *>(requester), 0);

	zmq_msg_t rec;
	zmq_msg_init(&rec);
	zmq_msg_recv(&rec, static_cast<void *>(requester), 0);

	data = (char *)zmq_msg_data(&rec);
	zmq_msg_close(&rec);
	response.ParseFromString(data);
}

int main ()
{
	zmq::context_t context(1);

    zmq::socket_t requester(context, ZMQ_REQ);
    requester.connect("tcp://localhost:5560");

    int cookie = 0;

	while (true) {
		//cout << static_cast<int>(getpid()) << "\n";
		communication::Request request;
		communication::Response response;
		cout << "Please enter a request: ";
		string input;
		getline(cin, input);
		//cout << "printing" << input << "\n";
		vector<string> v;
		split(input, ' ', v);
		if (v[0] == "register") {
			if (v.size() != 3) {
				cout << "Invalid Parameters\n";
			}
			else {
				request.set_type("register");
				request.set_username(v[1]);
				request.set_password(v[2]);
				process(request, response, requester);
				cout << "response is " << response.status() << "\n";
			}
		}
		else if (v[0] == "login") {
			if (v.size() != 3) {
				cout << "Invalid Parameters\n";
			}
			else {
				request.set_type("login");
				request.set_username(v[1]);
				request.set_password(v[2]);
				//cout << v[2] << "\n";
				//cout << request.password() << "\n";
				process(request, response, requester);
				cookie = response.cookie();
				cout << "response is " << response.status() << "\n";
				//cout << "cookie is " << cookie << "\n";
			}
		}
		else if (v[0] == "logout") {
			if (v.size() != 1) {
				cout << "Invalid Parameters\n";
			}
			else {
				request.set_type("logout");
				request.set_cookie(cookie);
				process(request, response, requester);
				cout << "response is " << response.status() << "\n";
			}
		}
		else if (v[0] == "follow") {
			if (v.size() != 2) {
				cout << "Invalid Parameters\n";
			}
			else {
				request.set_type("follow");
				request.set_cookie(cookie);
				request.set_to_follow(v[1]);
				process(request, response, requester);
				cout << "response is " << response.status() << "\n";
			}
		}
		else if (v[0] == "post") {
			if (v.size() != 2) {
				cout << "Invalid Parameters\n";
			}
			else {
				request.set_type("post");
				request.set_cookie(cookie);
				request.set_post(v[1]);
				process(request, response, requester);
				cout << "response is " << response.status() << "\n";
			}
		}
		else if (v[0] == "getfeed") {
			if (v.size() != 1) {
				cout << "Invalid Parameters\n";
			}
			else {
				request.set_type("getfeed");
				request.set_cookie(cookie);
				process(request, response, requester);
				map<int, string> tweets;
				for (int i = 0; i < response.tweets_size(); i++) {
			        const communication::Response::Tweet& tw = response.tweets(i);
			        tweets[tw.time()] = tw.content();
			    }
			    for (auto it = tweets.rbegin(); it != tweets.rend(); ++it) {
			    	cout << it->second << "\n";
			    }
				//cout << "response is " << response.status() << "\n";
			}
		}
		else {
			cout << "Invalid Request\n";
		}
 	}

}