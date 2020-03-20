cmake_minimum_required(VERSION 3.14)
project(Chapter8 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter8 main.c BinaryTree.h BinaryTree.c BinaryTreeMain.c BinaryTreeTraverseMain.c BinaryTree2.h BinaryTree2.c BinaryTreeMain2.c ExpressionTree.h ListBaseStack.h ListBaseStack.c ExpressionTree.c ExpressionMain.c)