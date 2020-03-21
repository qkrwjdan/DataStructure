//
// Created by macbook air on 2020-03-21.
//

#include <stdio.h>
#include <string.h>
#include "PriorityQueue.h"


int DataPriorityComp(char * c1, char * c2){
    return strlen(c2)-strlen(c1);
}

int main(void){
    PQueue pq;
    PQueueInit(&pq,DataPriorityComp);

    PEnqueue(&pq,"ABC");
    PEnqueue(&pq,"BC");
    PEnqueue(&pq,"C");
    printf("%s \n",PDequeue(&pq));
    PEnqueue(&pq,"ABC");
    PEnqueue(&pq,"BC");
    PEnqueue(&pq,"C");
    printf("%s \n",PDequeue(&pq));

    while(!PQIsEmpty(&pq)){
        printf("%s \n",PDequeue(&pq));
    }

    return 0;
}