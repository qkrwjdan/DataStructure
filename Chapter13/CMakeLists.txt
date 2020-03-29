cmake_minimum_required(VERSION 3.14)
project(Chapter13 C)

set(CMAKE_C_STANDARD 99)

add_executable(Chapter13 main.c UnderstandTable.c TableHashFunction.c Person.h Person.c Slot.h Table.h Table.c SimpleHashMain.c DLinkedList.h DLinkedList.c Slot2.h Table2.h Table2.c ChainedTableMain.c)