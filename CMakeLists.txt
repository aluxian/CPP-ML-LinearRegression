cmake_minimum_required(VERSION 3.1)
project(ML)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ML ${SOURCE_FILES} LinearRegression.cpp LinearRegression.h Utils.cpp Utils.h)
