//
// Created by macbook air on 2020-03-17.
//

#ifndef CHAPTER7_LISTBASEQUEUE_H
#define CHAPTER7_LISTBASEQUEUE_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node{
    Data data;
    struct _node * next;
}Node;

typedef struct _lQueue{
    Node * front;
    Node * rear;
}LQueue;

typedef LQueue Queue;

void QueueInit(Queue * pq);
int QIsEmpty(Queue * pq);

void Enqueue(Queue * pq,Data data);
Data Dequeue(Queue * pq);
Data QPeek(Queue * pq);


#endif //CHAPTER7_LISTBASEQUEUE_H
