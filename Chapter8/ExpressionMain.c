//
// Created by macbook air on 2020-03-19.
//

#include <stdio.h>
#include "BinaryTree2.h"
#include "ExpressionTree.h"

int main(void){
    char exp[] = "12+7*";
    BTreeNode * eTree = MakeExpTree(exp);

    printf("전위\n");
    ShowPrefixTypeExp(eTree); printf("\n");
    printf("후위\n");
    ShowPostfixTypeExp(eTree);printf("\n");
    printf("중위\n");
    ShowInfixTypeExp(eTree);printf("\n");

    printf("%d\n",EvaluateExpTree(eTree));

}

