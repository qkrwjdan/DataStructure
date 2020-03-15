//
// Created by macbook air on 2020-03-15.
//

#include <stdio.h>
#include <stdlib.h>
#include "ExStack.h"

void StackInit(List * plist){
    ListInit(plist);
}

int SIsEmpty(List * plist){
    if(LCount(plist) == 0)
        return TRUE;
    else
        return FALSE;
}

void SPush(List * list, Data data){
    LInsertFront(list,data);
}

Data SPop(List * list) {

    Data rdata;

    LFirst(list,&rdata);
    LRemove(list);

    return rdata;
}

Data SPeek(List * list){
    Data rdata;

    LFirst(list,&rdata);
    return rdata;
}
