//
// Created by macbook air on 2020-03-14.
//

#include <stdio.h>
#include <stdlib.h>

#include "DBLinkedList.h"

void ListInit(List * plist){

//    plist->head = NULL;
//    plist->cur = NULL;
//    plist->numOfData = 0;


    plist->head = (Node *)malloc(sizeof(Node));
    plist->tail = (Node *)malloc(sizeof(Node));

    plist->head->prev = NULL;
    plist->head->next = plist->tail;

    plist->tail->next = NULL;
    plist->tail->prev = plist->head;

    plist->cur = NULL;
    plist->numOfData = 0;
}

void LInsert(List * plist, Data data){

    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

//    if(plist->head == NULL){
//        newNode->next = NULL;
//        newNode->prev = NULL;
//        plist->head = newNode;
//    }else{
//        plist->head->prev = newNode;
//        newNode->next = plist->head;
//
//        newNode->prev = NULL;
//        plist->head = newNode;
//    }
//
//    newNode->next = plist->head;
//    if(plist->head != NULL)
//        plist->head->prev = newNode;
//
//    newNode->prev = NULL;
//    plist->head = newNode;

    newNode->prev = plist->tail->prev;
    newNode->next = plist->tail;

    plist->tail->prev->next = newNode;
    plist->tail->prev = newNode;

    (plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata){

//    if(plist->head == NULL)
//        return FALSE;
//
//    plist->cur = plist->head;
//    *pdata = plist->cur->data;
//    return TRUE;

    if(plist->head->next == plist->tail)
        return FALSE;

    plist->cur = plist->head->next;
    *pdata = plist->cur->data;
    return TRUE;
}

int LNext(List * plist, Data * pdata){

//    if(plist->cur->next == NULL)
//        return FALSE;
//
//    plist->cur = plist->cur->next;
//    *pdata = plist->cur->data;
//    return TRUE;
    if(plist->cur->next == plist->tail)
        return FALSE;
    plist->cur = plist->cur->next;
    *pdata = plist->cur->data;
    return TRUE;

}

int LPrevious(List * plist, Data * pdata){

//    if(plist->cur->prev == NULL)
//        return FALSE;
//
//    plist->cur = plist->cur->prev;
//    *pdata = plist->cur->data;
//    return TRUE;

    if(plist->cur->prev == plist->head)
        return FALSE;
    plist->cur = plist->cur->prev;
    *pdata = plist->cur->data;
    return TRUE;
}

int LCount(List * plist){
    return plist->numOfData;
}

Data LRemove(List * plist){

    Node * rpos = plist->cur;
    Data rdata = rpos->data;

    plist->cur->prev->next = plist->cur->next;
    plist->cur->next->prev = plist->cur->prev;

    plist->cur = plist->cur->prev;

    free(rpos);
    (plist->numOfData)--;
    return rdata;
}
