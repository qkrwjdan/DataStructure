cmake_minimum_required(VERSION 3.14)
project(Chapter12 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter12 main.c BinaryTree3.h BinaryTree3.c AVLRebalance.c AVLRebalance.h BinarySearchTree3.h BinarySearchTree3.c AVLTreeMain.c)