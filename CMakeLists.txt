cmake_minimum_required(VERSION 3.5)
project(Receipt)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Receipt.cpp Receipt.h)
add_executable(Receipt ${SOURCE_FILES})
