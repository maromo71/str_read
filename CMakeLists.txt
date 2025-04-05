cmake_minimum_required(VERSION 3.28)
project(str_read C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(str_read
        src/str_read.c
        include/str_read.h
        src/main.c)
