//
// Created by macbook air on 2020-03-18.
//

#ifndef CHAPTER7_DEQUEBASEQUEUE_H
#define CHAPTER7_DEQUEBASEQUEUE_H

#include "Deque.h"

typedef Deque Queue;

void QueueInit(Queue * pq);
int QIsEmpty(Queue * pq);

void Enqueue(Queue * pq,Data data);
Data Dequeue(Queue * pq);
Data QPeek(Queue * pq);

#endif //CHAPTER7_DEQUEBASEQUEUE_H
