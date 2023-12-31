# cmake 最低版本
cmake_minimum_required(VERSION 3.10)

project(shared_bike)


# cpp 标准
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -fPIC -ggdb -std=c++11 -Wall -Wno-deprecated -Wno-builtin-macro-redefined -Wno-deprecated-declarations")
set(CMAKE_C_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -fPIC -ggdb -std=c11 -Wall -Wno-deprecated -Wno-builtin-macro-redefined -Wno-deprecated-declarations")

include_directories(/usr/local/include)
include_directories(./include)
include_directories(./thrid/)

link_directories(/usr/local/lib/)

add_library(shared_bike SHARED
    src/bike.pb.cc
)


set(LINK_LIB
    shared_bike
    protobuf
    log4cpp
    pthread
    event
)

link_libraries(${LINK_LIB})

add_executable(log_test ./test/log_test.cpp)
add_executable(bike_proto_test ./test/bike_proto_test.cpp)

# 设置动态库和可执行文件的输出路径
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
