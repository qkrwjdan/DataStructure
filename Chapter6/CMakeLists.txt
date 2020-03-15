cmake_minimum_required(VERSION 3.14)
project(Chapter6 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter6 main.c ArrayBaseStack.h ArrayBaseStack.c ListBaseStack.h ListBaseStack.c ListBaseStackMain.c CLinkedList.h CLinkedList.c Ex6_1.c ExStack.h ExStack.c)