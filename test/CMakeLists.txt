cmake_minimum_required(VERSION 3.2)
project(test_me)

# GTest
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)
#include_directories(${GTEST_INCLUDE_DIRS})

add_library(Calculator ../src/Calculator.cpp)

# Unit Tests
# Add test cpp file
add_executable( runUnitTests tests.cpp)
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests GTest::GTest GTest::Main Calculator)
gtest_discover_tests(runUnitTests)
#add_test( runUnitTests runUnitTests )