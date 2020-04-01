//
// Created by macbook air on 2020-04-01.
//

#ifndef CHAPTER14_ALGRAPHKRUSKAL_H
#define CHAPTER14_ALGRAPHKRUSKAL_H

#include "DLinkedList.h"
#include "PriorityQueue.h"
#include "ALEdge.h"

enum {A,B,C,D,E,F,G,H,I,J};

typedef struct _ual{
    int numV;
    int numE;
    List * adjList;
    int * VisitInfo;
    PQueue pqueue;
}ALGraph;

void GraphInit(ALGraph * pg, int nv);

void GraphDestroy(ALGraph * pg);

void AddEdge(ALGraph * pg, int fromV, int toV, int weight);

void ShowGraphEdgeInfo(ALGraph * pg);

void DFShowGraphVertex(ALGraph * pg, int startV);

void ConKruskalMST(ALGraph * pg);

void ShowGraphEdgeWeightInfo(ALGraph * pg);

#endif //CHAPTER14_ALGRAPHKRUSKAL_H
