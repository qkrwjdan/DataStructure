//
// Created by macbook air on 2020-03-29.
//

#include <stdio.h>
#include <stdlib.h>
#include "Person.h"
#include "Table2.h"

int MyHashFunc(int k){
    return k % 100;
}

int main(void){
    Table myTbl;
    Person *np;
    Person *sp;
    Person *rp;

    TBLInit(&myTbl,MyHashFunc);

    np = MakePersonData(20130003,"Lee","Seoul");
    TBLInsert(&myTbl,GetSSN(np),np);

    sp = MakePersonData(20171122,"jiyoung","seoul");
    TBLInsert(&myTbl,GetSSN(sp),sp);

    rp = MakePersonData(20171123,"park","gunpo");
    TBLInsert(&myTbl,GetSSN(rp),rp);

    np = MakePersonData(20181123,"park","gunpo");
    TBLInsert(&myTbl,GetSSN(np),np);

    sp = TBLSearch(&myTbl,20130003);
    if(sp != NULL)
        ShowPerInfo(sp);

    sp = TBLSearch(&myTbl,20171122);
    if(sp != NULL)
        ShowPerInfo(sp);

    sp = TBLSearch(&myTbl,20171123);
    if(sp != NULL)
        ShowPerInfo(sp);

    rp = TBLDelete(&myTbl,20130003);
    if(rp != NULL)
    {
        ShowPerInfo(rp);
        printf("\n");
        free(rp);
    }

    rp = TBLDelete(&myTbl,20171123);
    if(rp != NULL)
    {
        ShowPerInfo(rp);
        printf("\n");
        free(rp);
    }

    rp = TBLDelete(&myTbl,20171122);
    if(rp != NULL)
    {
        ShowPerInfo(rp);
        printf("\n");
        free(rp);
    }

    rp = TBLSearch(&myTbl,20181122);
    if(rp != NULL)
    {
        ShowPerInfo(rp);
        printf("\n");
        free(rp);
    }

    rp = TBLSearch(&myTbl,20181123);
    if(rp != NULL)
    {
        ShowPerInfo(rp);
        printf("\n");
        free(rp);
    }


}