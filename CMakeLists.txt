cmake_minimum_required(VERSION 3.24)
project(client-server LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)

# Find protobuf package
find_package(Protobuf REQUIRED)

# Define the path to your protobuf .proto files
set(PROTOBUF_PROTO_DIR ${CMAKE_SOURCE_DIR}/proto)
set(PROTOBUF_PROTO_DIR ${CMAKE_SOURCE_DIR}/proto)

# Include directories
include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(${PROTOBUF_PROTO_DIR}/christine)
include_directories(${PROTOBUF_PROTO_DIR}/hytech)
include_directories(include)

# Add the server library
add_library(server_driver src/server_driver.cpp ${PROTO_SRCS} ${PROTO_HDRS})
add_library(client_driver src/client_driver.cpp ${PROTO_SRCS} ${PROTO_HDRS})

# Add the server executable
add_executable(server app/server_main.cpp ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(server server_driver ${Protobuf_LIBRARIES})

# Add the client executable
add_executable(client app/client_main.cpp ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(client client_driver ${Protobuf_LIBRARIES})

