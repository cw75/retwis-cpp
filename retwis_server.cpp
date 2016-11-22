#include <zmq.hpp>
#include <string>
#include <iostream>
#include <unistd.h>
#include <vector>
#include <list>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include "message.pb.h"

using namespace std;


struct post{
    int time;
    string content;
public:
    post(int t, string c) {
        time = t;
        content = c;
    }
};

struct user_data{
    string password;
    unordered_set<string> following;
    unordered_set<string> followers;
    list<post> feed;
};

string process_request(communication::Request &req, unordered_map<string, user_data> &user_table, unordered_map<string, int> &user_cookie, unordered_map<int, string> &cookie_user) {
    communication::Response response;
    if (req.type() == "register") {
        string name = req.username();
        string password = req.password();
        if (user_table.find(name) == user_table.end()) {
            user_table[name].password = password;
            response.set_status("OK");
        }
        else {
            response.set_status("Username already exists");
        }
    }
    else if (req.type() == "login") {
        string name = req.username();
        string password = req.password();
        //cout << user_table[name].password << "\n";
        //cout << password << "\n";
        if (user_table.find(name) != user_table.end() && user_table[name].password.compare(password) == 0) {
            int cookie = (int)time(NULL);
            user_cookie[name] = cookie;
            cookie_user[cookie] = name;
            response.set_cookie(cookie);
            response.set_status("OK");
        }
        else {
            response.set_status("Wrong username or password");
        }
    }
    else if (req.type() == "logout") {
        int cookie = req.cookie();
        if (cookie_user.find(cookie) != cookie_user.end()) {
            string username = cookie_user[cookie];
            user_cookie.erase(username);
            cookie_user.erase(cookie);
            response.set_status("OK");
        }
        else {
            response.set_status("Invalid Cookie");
        }
    }
    else if (req.type() == "follow") {
        int cookie = req.cookie();
        string to_follow = req.to_follow();
        if (cookie_user.find(cookie) != cookie_user.end() && user_table.find(to_follow) != user_table.end()) {
            string name = cookie_user[cookie];
            user_table[name].following.insert(to_follow);
            user_table[to_follow].followers.insert(name);
            response.set_status("OK");
        }
        else {
            response.set_status("Invalid cookie or Person to follow");
        }
    }
    else if (req.type() == "post") {
        int cookie = req.cookie();
        string content = req.post();
        if (cookie_user.find(cookie) != cookie_user.end()) {
            string name = cookie_user[cookie];
            int t = (int)time(NULL);
            user_table[name].feed.push_back(post(t, content));
            response.set_status("OK");
        }
        else {
            response.set_status("Invalid Cookie");
        }
    }
    else if (req.type() == "getfeed") {
        int cookie = req.cookie();
        if (cookie_user.find(cookie) != cookie_user.end()) {
            string name = cookie_user[cookie];
            for (auto it = user_table[name].feed.begin(); it != user_table[name].feed.end(); ++it) {
                communication::Response_Tweet* tw = response.add_tweets();
                tw->set_time(it->time);
                tw->set_content(it->content);
            }
            for (auto itx = user_table[name].following.begin(); itx != user_table[name].following.end(); ++itx) {
                for (auto ity = user_table[*itx].feed.begin(); ity != user_table[*itx].feed.end(); ++ity) {
                    communication::Response_Tweet* tw = response.add_tweets();
                    tw->set_time(ity->time);
                    tw->set_content(ity->content);
                }
            }
            response.set_status("OK");
        }
        else {
            response.set_status("Invalid Cookie");
        }
    }
    else {
        response.set_status("Unknown Error!");
    }
    string data;
    response.SerializeToString(&data);
    return data;
}

int main ()
{
    unordered_map<string, user_data> user_table;
    unordered_map<string, int> user_cookie;
    unordered_map<int, string> cookie_user;

    zmq::context_t context (1);
    zmq::socket_t responder (context, ZMQ_REP);
    responder.bind("tcp://*:5560");

    while(true){
        zmq_msg_t rec;
        zmq_msg_init(&rec);
        zmq_msg_recv(&rec, static_cast<void *>(responder), 0);
        string data = (char *)zmq_msg_data(&rec);
        zmq_msg_close(&rec);
        communication::Request req;
        req.ParseFromString(data);
        cout << "Received request: " << req.type() << "\n";
        cout << req.password() << "\n";
        string result = process_request(req, user_table, user_cookie, cookie_user);
        //  Send reply back to client
        zmq_msg_t msg;
        zmq_msg_init_size(&msg, result.size());
        memcpy(zmq_msg_data(&msg), &(result[0]), result.size());
        zmq_msg_send(&msg, static_cast<void *>(responder), 0);
    }


    return 0;
}
















