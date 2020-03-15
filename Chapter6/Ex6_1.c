//
// Created by macbook air on 2020-03-15.
//

#include <stdio.h>
#include "ExStack.h"

int main() {

    printf("start\n");
    List stack;
    StackInit(&stack);
    printf("stack Init done\n");

    SPush(&stack, 1);
    SPush(&stack, 2);
    SPush(&stack, 3);
    SPush(&stack, 4);
    SPush(&stack, 5);
    SPush(&stack, 1);
    printf("%d\n",SPeek(&stack));

    printf("stack push done\n");

    while(!SIsEmpty(&stack))
        printf("%d\n",SPop(&stack));

    printf("stack pop done\n");

}