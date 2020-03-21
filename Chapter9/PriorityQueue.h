//
// Created by macbook air on 2020-03-21.
//

#ifndef CHAPTER9_PRIORITYQUEUE_H
#define CHAPTER9_PRIORITYQUEUE_H

#include "UsefulHeap.h"

typedef Heap PQueue;
typedef HData PQData;

void PQueueInit(PQueue * ppq, PriorityComp pc);
int PQIsEmpty(PQueue * ppq);

void PEnqueue(PQueue * ppq,PQData data);
PQData PDequeue(PQueue * ppq);

#endif //CHAPTER9_PRIORITYQUEUE_H
