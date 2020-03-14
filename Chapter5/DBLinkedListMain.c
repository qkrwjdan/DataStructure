//
// Created by macbook air on 2020-03-14.
//
#include <stdio.h>
#include "DBLinkedList.h"

int main(void){

    List list;
    int data;
    ListInit(&list);

    LInsert(&list,1);
    LInsert(&list,2);
    LInsert(&list,3);
    LInsert(&list,4);
    LInsert(&list,5);
    LInsert(&list,6);
    LInsert(&list,7);
    LInsert(&list,8);

    if(LFirst(&list,&data)){
        printf("%d\n",data);

        while(LNext(&list,&data)){
            printf("%d\n",data);
        }
        while(LPrevious(&list,&data)){
            printf("%d\n",data);
        }
        printf("\n");
    }

    if(LFirst(&list,&data)){
        printf("%d\n",data);

        while(LNext(&list,&data)){
            printf("%d 삭제\n",LRemove(&list));
        }
        while(LPrevious(&list,&data)){
            printf("%d 삭제\n",LRemove(&list));
        }
        printf("\n");
    }


    return 0;

}