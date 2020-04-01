//
// Created by macbook air on 2020-03-21.
//

#ifndef CHAPTER9_USEFULHEAP_H
#define CHAPTER9_USEFULHEAP_H

#define TRUE 1
#define FALSE 0

#define HEAP_LEN 100

#include "ALEdge.h"

typedef Edge HData;
typedef int PriorityComp(HData d1,HData d2);

typedef struct _heap{
    PriorityComp * comp;
    int numOfData;
    HData heapArr[HEAP_LEN];
}Heap;

void HeapInit(Heap * ph,PriorityComp pc);
int HIsEmpty(Heap * ph);

void HInsert(Heap * ph,HData data);
HData HDelete(Heap * ph);

#endif //CHAPTER9_USEFULHEAP_H
