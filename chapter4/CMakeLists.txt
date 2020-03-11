cmake_minimum_required(VERSION 3.14)
project(chapter4 C)

set(CMAKE_C_STANDARD 99)

add_executable(chapter4 main.c LinkedRead.c Ex4_1.c Ex4_2.c DLinkedList.h DLinkedList.c DLinkedListMain.c PointListMain.c Point.c Point.h DLinkedListSortMain.c Ex4_3.c)