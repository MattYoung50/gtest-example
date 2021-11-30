cmake_minimum_required(VERSION 3.2)
project(gtest-example)

add_library(Calculator Calculator.cpp)
add_executable( gtest-example main.cpp)
target_link_libraries(gtest-example Calculator)