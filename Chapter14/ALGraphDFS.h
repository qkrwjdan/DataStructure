//
// Created by macbook air on 2020-03-30.
//

#ifndef CHAPTER14_ALGRAPHDFS_H
#define CHAPTER14_ALGRAPHDFS_H

#include "DLinkedList.h"

enum {A,B,C,D,E,F,G,H,I,J};

typedef struct _ual{
    int numV;
    int numE;
    List * adjList;
    int * VisitInfo;
}ALGraph;

void GraphInit(ALGraph * pg,int nv);

void GraphDestroy(ALGraph * pg);

void AddEdge(ALGraph * pg, int fromV, int toV);

void ShowGraphEdgeInfo(ALGraph * pg);

void DFShowGraphVertex(ALGraph * pg, int startV);


#endif //CHAPTER14_ALGRAPHDFS_H
