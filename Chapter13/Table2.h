//
// Created by macbook air on 2020-03-29.
//

#ifndef CHAPTER13_TABLE2_H
#define CHAPTER13_TABLE2_H

#include "Slot2.h"
#include "DLinkedList.h"

#define MAX_LEN 100

typedef int HashFunc(Key k);

typedef struct _table{
    List tbl[MAX_LEN];
    HashFunc * hf;
}Table;

void TBLInit(Table * pt, HashFunc * f);
void TBLInsert(Table * pt, Key k, Value v);
Value TBLDelete(Table * pt, Key k);
Value TBLSearch(Table * pt, Key k);

#endif //CHAPTER13_TABLE2_H
