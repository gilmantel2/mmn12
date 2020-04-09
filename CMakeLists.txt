# cmake_minimum_required(VERSION <specify CMake version here>)
project(mmn12 C)

set(CMAKE_C_STANDARD 90)
add_executable(Assignment-1 main.c adjacency.c)
add_executable(Assignment-1_test test.c adjacency.c)