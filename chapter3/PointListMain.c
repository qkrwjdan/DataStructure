////
//// Created by macbook air on 2020-03-09.
////
//
//#include <stdlib.h>
//#include <stdio.h>
//#include "ArrayList.h"
//#include "Point.h"
//
//int main(void){
//
//    List list;
//    Point compPos;
//    Point * ppos;
//
//    ListInit(&list);
//
//    ppos = (Point *)malloc(sizeof(Point));
//    SetPointPos(ppos,2,1);
//    LInsert(&list, ppos);
//
//    ppos = (Point *)malloc(sizeof(Point));
//    SetPointPos(ppos,2,2);
//    LInsert(&list, ppos);
//
//    ppos = (Point *)malloc(sizeof(Point));
//    SetPointPos(ppos,3,1);
//    LInsert(&list, ppos);
//
//    ppos = (Point *)malloc(sizeof(Point));
//    SetPointPos(ppos,3,2);
//    LInsert(&list, ppos);
//
//    printf("현재 저장된 데이터갯수 : %d\n",LCount(&list));
//
//    if(LFirst(&list, &ppos))
//    {
//        ShowPointPos(ppos);
//        while(LNext(&list,&ppos)) {
//            ShowPointPos(ppos);
//        }
//    }
//    printf("\n");
//
//    compPos.xpos = 2;
//    compPos.ypos = 0;
//
//    if(LFirst(&list, &ppos))
//    {
//        if(PointComp(ppos,&compPos) == 1){
//            LRemove(&list);
//            free(ppos);
//        }
//
//        while(LNext(&list,&ppos)) {
//            if(PointComp(ppos,&compPos)==1){
//                LRemove(&list);
//                free(ppos);
//            }
//        }
//    }
//
//    printf("현재 데이텅의 수 : %d \n",LCount(&list));
//
//    if(LFirst(&list,&ppos))
//    {
//        ShowPointPos(ppos);
//        while(LNext(&list,&ppos))
//            ShowPointPos(ppos);
//    }
//    printf("\n");
//
//    return 0;
//
//
//
//
//}