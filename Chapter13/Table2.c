//
// Created by macbook air on 2020-03-29.
//

#include "Table2.h"
#include "DLinkedList.h"

#include <stdio.h>
#include <stdlib.h>

void TBLInit(Table * pt, HashFunc * f){
    pt->hf = f;

    for(int i=0;i<MAX_LEN;i++){
        ListInit(&(pt->tbl[i]));
    }
}

void TBLInsert(Table * pt, Key k, Value v){
    int hv = pt->hf(k);

//    Slot * newSlot = (Slot*)malloc(sizeof(Slot));
//    newSlot->key = k;
//    newSlot->val = v;

    Slot newSlot = {k,v};

    if(TBLSearch(pt,k) != NULL){
        printf("중복 키 발생 \n ");
        return;
    }
    else{
        //    LInsert(&(pt->tbl[hv]),*newSlot);
        LInsert(&(pt->tbl[hv]),newSlot);
    }
}

Value TBLDelete(Table * pt, Key k){

    int hv = pt->hf(k);
    Slot cSlot;

    if(LFirst(&(pt->tbl[hv]),&cSlot))
    {
        if(cSlot.key == k)
        {
            LRemove(&(pt->tbl[hv]));
            return cSlot.val;
        }
        else
        {
            while(LNext(&(pt->tbl[hv]),&cSlot)){
                if(cSlot.key == k){
                    LRemove(&(pt->tbl[hv]));
                    return cSlot.val;
                }
            }
        }
    }

    return NULL;
}

Value TBLSearch(Table * pt,Key k){
    int hv = pt->hf(k);
    Slot cSlot;

    if(LFirst(&(pt->tbl[hv]),&cSlot)){
        if(cSlot.key == k)
            return cSlot.val;
        else{
            while(LNext(&(pt->tbl[hv]),&cSlot)){
                if(cSlot.key == k)
                    return cSlot.val;
            }
        }
    }
    return NULL;
}



