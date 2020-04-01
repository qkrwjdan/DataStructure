cmake_minimum_required(VERSION 3.14)
project(Chapter14 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter14 main.c ALGraph.c ALGraph.h DLinkedList.h DLinkedList.c ALGraphMain.c ALGraphDFS.h ALGraphDFS.c ArrayBaseStack.h ArrayBaseStack.c DFSMain.c CircularQueue.h CircularQueue.c ALGraphBFS.h ALGraphBFS.c BFSMain.c ALEdge.h ALGraphKruskal.h PriorityQueue.h PriorityQueue.c UsefulHeap.h UsefulHeap.c ALGraphKruskal.c KruskalMain.c)