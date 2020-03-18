//
// Created by macbook air on 2020-03-18.
//

#include "DequeBaseQueue.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    Queue * que = (Queue *)malloc(sizeof(Queue));

    QueueInit(que);

    Enqueue(que,1);
    Enqueue(que,1);
    Enqueue(que,1);

    printf("%d\n",Dequeue(que));
    printf("%d\n",Dequeue(que));
    printf("%d\n",Dequeue(que));
    printf("%d\n",Dequeue(que));
}