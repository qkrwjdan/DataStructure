cmake_minimum_required(VERSION 3.14)
project(Chapter7 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter7 main.c CircularQueue.h CircularQueue.c CircularQueueMain.c ListBaseQueue.h ListBaseQueue.c ListBaseQueueMain.c HamburgerSim.c Deque.h Deque.c DequeMain.c DequeBaseQueue.h DequeBaseQueue.c Ex7_1.c)