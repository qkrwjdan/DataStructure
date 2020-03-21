////
//// Created by macbook air on 2020-03-21.
////
//
//#include <stdio.h>
//#include "UsefulHeap.h"
//
//int DataPriorityComp(char ch1, char ch2)
//{
////    return ch2-ch1;
//    return ch1 - ch2;
//}
//
//
//int main(void){
//    printf("start!\n");
//
//    Heap heap;
//    HeapInit(&heap,DataPriorityComp);
//
//    printf("Init done\n");
//
//    HInsert(&heap,'A');
//    HInsert(&heap,'B');
//    HInsert(&heap,'C');
//    HInsert(&heap,'D');
//
//
//    printf("%c \n",HDelete(&heap));
//
//    HInsert(&heap,'A');
//    HInsert(&heap,'B');
//    HInsert(&heap,'C');
//    HInsert(&heap,'D');
//
//    printf("%c \n",HDelete(&heap));
//
//    while(!HIsEmpty(&heap)){
//        printf("%c \n",HDelete(&heap));
//    }
//    return 0;
//
//
//}