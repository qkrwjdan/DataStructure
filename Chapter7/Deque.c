//
// Created by macbook air on 2020-03-18.
//

#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"

void DequeInit(Deque * pdeq){
    pdeq->tail = NULL;
    pdeq->head = NULL;
}

int DQIsEmpty(Deque * pdeq){
    if(pdeq->head == NULL)
        return TRUE;
    else
        return FALSE;
}

void DQAddFirst(Deque * pdeq, Data data){

//    Node * newNode = (Node *)malloc(sizeof(Node));
//    newNode->data = data;
//    newNode->next = NULL;
//    newNode->prev = NULL;
//
//    if(DQIsEmpty(pdeq)){
//        pdeq->tail = newNode;
//    }
//    else{
//        pdeq->head->next = newNode;
//        newNode->prev = pdeq->head;
//    }
//    pdea->head = newNode;

    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = pdeq->head;

    if(DQIsEmpty(pdeq)) //첫 노드인 경
        pdeq->tail = newNode;
    else
        pdeq->head->prev = newNode;

    newNode->prev = NULL;
    pdeq->head = newNode;

}

void DQAddLast(Deque * pdeq, Data data){

//    Node * newNode = (Node *)malloc(sizeof(Node));
//    newNode->data = data;
//    newNode->next = NULL;
//    newNode->prev = NULL;
//
//    if(DQIsEmpty(pdeq)){
//        pdeq->head = newNode;
//    }
//    else{
//        pdeq->tail->prev = newNode;
//        newNode->next = pdeq->tail;
//    }
//    pdeq->tail = newNode;
//
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = pdeq->tail;

    if(DQIsEmpty(pdeq))
        pdeq->head = newNode;
    else
        pdeq->tail->next = newNode;

    newNode->next = NULL;
    pdeq->tail = newNode;
}

Data DQRemoveFirst(Deque * pdeq){

    if(DQIsEmpty(pdeq)){
        printf("Deque Memory Error!\n");
        exit(-1);
    }
//
//    Node * rpos = pdeq->head;
//    Data rdata = pdeq->head->data;
//
//    pdeq->head = pdeq->head->prev;
//
//    free(rpos);
//
//    if(pdeq->head == NULL)
//        pdeq->tail == NULL;
//    else
//        pdeq->head->next = NULL;
//
//    return rdata;

    Node * rpos = pdeq->head;
    Data rdata = pdeq->head->data;

    pdeq->head = pdeq->head->next;
    free(rpos);

    if(pdeq->head == NULL)
        pdeq->tail = NULL;
    else
        pdeq->head->prev = NULL;

    return rdata;


}

Data DQRemoveLast(Deque * pdeq){

    if(DQIsEmpty(pdeq)){
        printf("Deque Memory Error!\n");
        exit(-1);
    }

//    Node * rpos = pdeq->tail;
//    Data rdata = pdeq->tail->data;
//
//    pdeq->tail = pdeq->tail->next;
//
//
//    if(pdeq->tail == NULL)
//        pdeq->head == NULL;
//    else
//        pdeq->tail->prev = NULL;
//
//    free(rpos);
//
//    return rdata;

    Node * rpos = pdeq->tail;
    Data rdata = pdeq->tail->data;
    pdeq->tail = pdeq->tail->prev;
    free(rpos);

    if(pdeq->tail == NULL)
        pdeq->head = NULL;
    else
        pdeq->tail->next = NULL;

    return rdata;

}

Data DQGetFirst(Deque * pdeq){

    if(DQIsEmpty(pdeq)){
        printf("Deque Memory Error!\n");
        exit(-1);
    }

    return pdeq->head->data;
}

Data DQGetLast(Deque * pdeq){
    if(DQIsEmpty(pdeq)){
        printf("Deque Memory Error!\n");
        exit(-1);
    }
    return pdeq->tail->data;
}