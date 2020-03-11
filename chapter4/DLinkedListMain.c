////
//// Created by macbook air on 2020-03-11.
////
//
//#include <stdio.h>
//#include "DLinkedList.h"
//
//int main(void){
//
//    List list;
//    int data;
//    ListInit(&list);
//
//    LInsert(&list,11);
//    LInsert(&list,12);
//    LInsert(&list,13);
//    LInsert(&list,14);
//    LInsert(&list,15);
//
//    printf("현재 데이터의 수 : %d\n",LCount(&list));
//
//    if(LFirst(&list,&data)){
//        printf("%d\n",data);
//        while(LNext(&list,&data)){
//            printf("%d\n",data);
//        }
//    }
//
//    printf("\n\n");
//
//    if(LFirst(&list,&data)){
//        if(data == 12)
//            LRemove(&list);
//        while(LNext(&list,&data)){
//            if(data == 12)
//                LRemove(&list);
//        }
//    }
//    printf("현재 데이터의 수 : %d\n",LCount(&list));
//
//    if(LFirst(&list,&data)){
//        printf("%d\n",data);
//        while(LNext(&list,&data)){
//            printf("%d\n",data);
//        }
//    }
//
//}