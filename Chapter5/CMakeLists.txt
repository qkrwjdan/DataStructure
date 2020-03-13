cmake_minimum_required(VERSION 3.14)
project(Chapter5 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter5 main.c CLinkedList.h CLinkedList.c Ex5_1.c StaffInfo.h)