////
//// Created by macbook air on 2020-03-13.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include "CLinkedList.h"
//#include "StaffInfo.h"
//
//Staff * CalDuty(char * who, int day,List * plist){
//    Staff * data;
//    int i,num;
//    num = LCount(plist);
//
//    LFirst(plist,&data);
//    if(strcmp(data->name,who) != 0){
//
//        for(i=0;i<num-1;i++) {
//            LNext(plist,&data);
//            if(strcmp(data->name,who) == 0)
//                break;
//        }
//        if(i >= num-1)
//            return NULL;
//    }
//
//    for(i=0;i<day;i++){
//        LNext(plist,&data);
//    }
//    return data;
//}
//
//int main(void){
//    List list;
//    Staff * data;
//    Staff * tmp;
//    int i;
//
//    ListInit(&list);
//
//    data = (Staff *)malloc(sizeof(Staff));
//    data->employeeNum = 1;
//    strcpy(data->name,"park1");
//    LInsert(&list,data);
//
//    data = (Staff *)malloc(sizeof(Staff));
//    data->employeeNum = 2;
//    strcpy(data->name,"park2");
//    LInsert(&list,data);
//
//    data = (Staff *)malloc(sizeof(Staff));
//    data->employeeNum = 3;
//    strcpy(data->name,"park3");
//    LInsert(&list,data);
//
//    data = (Staff *)malloc(sizeof(Staff));
//    data->employeeNum = 4;
//    strcpy(data->name,"park4");
//    LInsert(&list,data);
//
//    printf("%d\n",LCount(&list));
//
//    if(LFirst(&list,&tmp))
//    {
//        ShowEmployeeInfo(tmp);
//        for(i=0;i<LCount(&list)-1;i++){
//            if(LNext(&list,&tmp))
//                ShowEmployeeInfo(tmp);
//        }
//    }
//    printf("\n");
//
//    data = CalDuty("park1",7,&list);
//    ShowEmployeeInfo(data);
//
//    data = CalDuty("park2",3,&list);
//    ShowEmployeeInfo(data);
//
//    if(LFirst(&list,&data)){
//        free(data);
//        for(i=0;i<LCount(&list)-1;i++){
//            if(LNext(&list,&data))
//                free(data);
//        }
//    }
//
//    return 0;
//}
//
