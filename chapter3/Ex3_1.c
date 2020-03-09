////
//// Created by macbook air on 2020-03-09.
////
//
//#include <stdio.h>
//#include "ArrayList.h"
//
//int main(void){
//    List list;
//    int data;
//    ListInit(&list);
//    int sum = 0;
//
//    for(int i=1;i<10;i++){
//        LInsert(&list,i);
//    }
//    if (LFirst(&list,&data)){
//        sum += data;
//    }
//
//    while(1){
//        if(LNext(&list,&data)){
//            sum += data;
//        }
//        else
//            break;
//    }
//
//    printf("%d\n",sum);
//
//    if(LFirst(&list,&data))
//    {
//        if((data % 2 == 0) || (data % 3 == 0))
//        {
//            LRemove(&list);
//        }
//        while(LNext(&list,&data)){
//            if((data % 2 == 0) || (data % 3 == 0)) {
//                LRemove(&list);
//            }
//        }
//    }
//
//    if(LFirst(&list,&data))
//    {
//        printf("%d\n",data);
//        while(LNext(&list,&data)){
//            printf("%d\n",data);
//        }
//    }
//}