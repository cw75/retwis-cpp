cmake_minimum_required (VERSION 2.6)
project (retwis)

SET (CMAKE_CXX_COMPILER /usr/bin/clang++)
SET (CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -lprotobuf -lzmq -std=c++0x -stdlib=libc++")

include_directories (
	/usr/local/lib
	/usr/local/include
)

add_executable(run_client retwis_client.cpp message.pb.cc)
add_executable(run_server retwis_server.cpp message.pb.cc)
