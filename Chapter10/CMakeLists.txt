cmake_minimum_required(VERSION 3.14)
project(Chapter10 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter10 main.c BubbleSort.c SelectionSort.c InsertionSort.c UsefulHeap.c UsefulHeap.h MergeSort.c QuickSort.c Ex10_1.c RadixSort.c ListBaseQueue.h ListBaseQueue.c)