cmake_minimum_required(VERSION 3.14)
project(Chapter9 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter9 main.c SimpleHeap.h SimpleHeap.c SimpleHeapMain.c UsefulHeap.h UsefulHeap.c UsefulHeapMain.c PriorityQueue.h PriorityQueue.c PriorityQueueMain.c Ex9_1.c)