cmake_minimum_required(VERSION 3.26)
project(luogu_test)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(src)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(luogu_test src/test.cpp)
