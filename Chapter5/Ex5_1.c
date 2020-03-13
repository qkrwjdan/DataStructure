//
// Created by macbook air on 2020-03-13.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "CLinkedList.h"

Staff * CheckDuty(char name,int num,List list);

int main(void){
    List list;
    Staff * data;
    Staff * tmp;
    int i;

    ListInit(&list);

    data = (Staff *)malloc(sizeof(Staff));

    data->employeeNum = 1;
    strcpy(data->name,"park1");
    LInsert(&list,data);
    data->employeeNum = 2;
    strcpy(data->name,"park2");
    LInsert(&list,data);
    data->employeeNum = 3;
    strcpy(data->name,"park3");
    LInsert(&list,data);
    data->employeeNum = 4;
    strcpy(data->name,"park4");
    LInsert(&list,data);


    printf("%d\n",LCount(&list));

    if(LFirst(&list,&data))
    {
        printf("start : %s\t",data->name);
        for(i=0;i<LCount(&list)-1;i++){
            if(LNext(&list,&data))
                printf("%d : %s\t",i,data->name);
        }
    }
    printf("\n");
}