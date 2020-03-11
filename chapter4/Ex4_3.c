//
// Created by macbook air on 2020-03-11.
//

#include <stdlib.h>
#include <stdio.h>
#include "DLinkedList.h"
#include "Point.h"

int WhoIsPrecede(Point * p1, Point * p2) {
    if (p1->xpos < p2->xpos)
        return 0;
    else if (p1->xpos == p2->xpos) {
        if (p1->ypos < p2->ypos)
            return 0;
        else
            return 1;
    }else
        return 1;
}

int main(void){

    List list;
    Point compPos;
    Point * ppos;

    ListInit(&list);
    SetSortRule(&list,WhoIsPrecede);

    ppos = (Point *)malloc(sizeof(Point));
    SetPointPos(ppos,2,2);
    LInsert(&list, ppos);

    ppos = (Point *)malloc(sizeof(Point));
    SetPointPos(ppos,2,1);
    LInsert(&list, ppos);

    ppos = (Point *)malloc(sizeof(Point));
    SetPointPos(ppos,4,1);
    LInsert(&list, ppos);

    ppos = (Point *)malloc(sizeof(Point));
    SetPointPos(ppos,4,6);
    LInsert(&list, ppos);

    ppos = (Point *)malloc(sizeof(Point));
    SetPointPos(ppos,4,3);
    LInsert(&list, ppos);

    ppos = (Point *)malloc(sizeof(Point));
    SetPointPos(ppos,4,1);
    LInsert(&list, ppos);

    ppos = (Point *)malloc(sizeof(Point));
    SetPointPos(ppos,10,6);
    LInsert(&list, ppos);

    printf("현재 저장된 데이터갯수 : %d\n",LCount(&list));

    if(LFirst(&list, &ppos))
    {
        ShowPointPos(ppos);
        while(LNext(&list,&ppos)) {
            ShowPointPos(ppos);
        }
    }
    printf("\n");

    compPos.xpos = 2;
    compPos.ypos = 0;

    if(LFirst(&list, &ppos))
    {
        if(PointComp(ppos,&compPos) == 1){
            LRemove(&list);
            free(ppos);
        }

        while(LNext(&list,&ppos)) {
            if(PointComp(ppos,&compPos)==1){
                LRemove(&list);
                free(ppos);
            }
        }
    }

    printf("현재 데이터의 수 : %d \n",LCount(&list));

    if(LFirst(&list,&ppos))
    {
        ShowPointPos(ppos);
        while(LNext(&list,&ppos))
            ShowPointPos(ppos);
    }
    printf("\n");

    return 0;




}