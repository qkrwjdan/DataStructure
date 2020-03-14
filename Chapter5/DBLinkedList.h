//
// Created by macbook air on 2020-03-14.
//

#ifndef CHAPTER5_DBLINKEDLIST_H
#define CHAPTER5_DBLINKEDLIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct __node{
    Data data;
    struct __node * next;
    struct __node * prev;
}Node;

typedef struct _DLinkedList{
    Node * head;
    Node * cur;
    Node * tail;
    int numOfData;
}DBLinkedList;

typedef DBLinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data);
int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);
int LPrevious(List * plist, Data * pdata);
int LCount(List * plist);
Data LRemove(List * plist);
#endif //CHAPTER5_DBLINKEDLIST_H
