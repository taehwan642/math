cmake_minimum_required(VERSION 3.18)
project(math)
add_executable(test test/test.cpp src/Vector.h)
target_include_directories(test PUBLIC ${CMAKE_SOURCE_DIR}/src)
