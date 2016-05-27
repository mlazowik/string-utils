cmake_minimum_required(VERSION 2.8)
project(string_utils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3 -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

set(SOURCE_FILES
        string-utils/utils.cpp
        string-utils/utils.h)

add_library(string_utils ${SOURCE_FILES})

target_include_directories(string_utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})