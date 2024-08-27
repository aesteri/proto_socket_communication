cmake_minimum_required(VERSION 3.1)
project(
    client-server-socket VERSION 1.0
                  DESCRIPTION "basic server-client application"
)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf REQUIRED)

include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(proto/christine)
include_directories(include)

add_executable(server src/server.cpp src/christine.pb.cc)
target_link_libraries(server ${PROTOBUF_LIBRARIES})

add_executable(client src/client.cpp src/christine.pb.cc)
target_link_libraries(client ${PROTOBUF_LIBRARIES})