cmake_minimum_required(VERSION 3.14)
project(chapter3 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(chapter3
        ArrayList.c
        ArrayList.h
        ListMain.c)
