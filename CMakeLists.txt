cmake_minimum_required(VERSION 3.10)
project(helloworld LANGUAGES CXX)

add_library(helloworld STATIC
    hello.cpp
)

target_include_directories(helloworld PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

enable_testing()

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(hello.t hello.t.cpp)
target_link_libraries(hello.t PRIVATE helloworld GTest::gtest GTest::gtest_main)

gtest_discover_tests(hello.t)
