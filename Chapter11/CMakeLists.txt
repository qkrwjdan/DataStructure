cmake_minimum_required(VERSION 3.14)
project(Chapter11 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter11 main.c RecursiveBinarySearch.c InterpolSearch.c BinaryTree2.h BinaryTree2.c BinarySearchTree.h BinarySearchTree.c BinarySearchTreeMain.c)