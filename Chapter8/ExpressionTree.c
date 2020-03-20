//
// Created by macbook air on 2020-03-19.
//

#include "ListBaseStack.h"
#include "BinaryTree2.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ShowNodeData(int data){
    if(0<=data && data<=9)
        printf("%d",data);
    else
        printf("%c",data);
}

BTreeNode * MakeExpTree(char exp[]){
    Stack stack;
    BTreeNode * pnode;

    int expLen = strlen(exp);
    int i;

    for(i=0;i<expLen;i++){
        pnode = MakeBTreeNode();

        if(isdigit(exp[i])){
            SetData(pnode,exp[i]);
        }
        else{
            MakeRightSubTree(pnode,SPop(&stack));
            MakeLeftSubTree(pnode,SPop(&stack));
            SetData(pnode,exp[i]);
        }
        SPush(&stack,pnode);
    }

    return SPop(&stack);
}

int EvaluateExpTree(BTreeNode * bt){

    int op1,op2;

    if((GetLeftSubTree(bt)==NULL) && (GetRightSubTree(bt)==NULL))
        return GetData(bt);

    op1 = EvaluateExpTree(GetLeftSubTree(bt));
    op2 = EvaluateExpTree(GetRightSubTree(bt));

    switch(GetData(bt)){
        case '+' :
            return op1+op2;
        case '-' :
            return op1-op2;
        case '*' :
            return op1*op2;
        case '/' :
            return op1/op2;
    }

    return 0;
}

void ShowPrefixTypeExp(BTreeNode * bt){
    PreorderTraverse(bt,ShowNodeData);
}

void ShowInfixTypeExp(BTreeNode * bt){
    if(bt == NULL)
        return;

    if(bt->left != NULL && bt->right != NULL)
        printf("( ");

    ShowInfixTypeExp(bt->left);
    ShowNodeData(bt->data);
    ShowInfixTypeExp(bt->right);

    if(bt->left != NULL && bt->right != NULL)
        printf(" )");
}

void ShowPostfixTypeExp(BTreeNode * bt){
    PostorderTraverse(bt,ShowNodeData);
}
