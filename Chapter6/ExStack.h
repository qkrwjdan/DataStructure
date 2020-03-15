//
// Created by macbook air on 2020-03-15.
//

#ifndef CHAPTER6_EXSTACK_H
#define CHAPTER6_EXSTACK_H

#define TRUE 1
#define FALSE 0

#include "CLinkedList.h"

void StackInit(List * plist);
int SIsEmpty(List * plist);

void SPush(List * list, Data data);
Data SPop(List * list);
Data SPeek(List * list);


#endif //CHAPTER6_EXSTACK_H
