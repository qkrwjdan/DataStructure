//
// Created by macbook air on 2020-03-18.
//
#include "DequeBaseQueue.h"
#include "Deque.h"
#include <stdio.h>

void QueueInit(Queue * pq){
    DequeInit(pq);
}

int QIsEmpty(Queue * pq){
    return DQIsEmpty(pq);
}

void Enqueue(Queue * pq,Data data){
    DQAddLast(pq,data);
}

Data Dequeue(Queue * pq){
    return DQRemoveLast(pq);
}

Data QPeek(Queue * pq){
    return DQGetFirst(pq);
}