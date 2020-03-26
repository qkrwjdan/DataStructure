//
// Created by macbook air on 2020-03-26.
//

#include <stdio.h>
#include "BinaryTree3.h"
#include "BinarySearchTree3.h"

int showData(int data){
    printf("%d",data);
}

int main(void) {

    printf("Hello World!\n");
    printf("0");
    BTreeNode * avlRoot;
    BTreeNode * clNode;
    BTreeNode * crNode;
    printf("1");
    BSTMakeAndInit(&avlRoot);
    printf("2");

    BSTInsert(&avlRoot,1);
    BSTInsert(&avlRoot,2);
    BSTInsert(&avlRoot,3);
    BSTInsert(&avlRoot,4);
    BSTInsert(&avlRoot,5);
    BSTInsert(&avlRoot,6);
    BSTInsert(&avlRoot,7);
    BSTInsert(&avlRoot,8);
    BSTInsert(&avlRoot,9);
    printf("3");

    printf("\n");

    printf("루트노드 : %d \n",GetData(avlRoot));

    BSTShowAll(avlRoot);

    clNode = GetLeftSubTree(avlRoot);
    crNode = GetRightSubTree(avlRoot);
    printf("왼쪽1 : %d,오른쪽1 : %d\n",GetData(clNode),GetData(crNode));

    clNode = GetLeftSubTree(clNode);
    crNode = GetRightSubTree(crNode);
    printf("왼쪽2 : %d,오른쪽2 : %d\n",GetData(clNode),GetData(crNode));

    InorderTraverse(avlRoot,showData);
    printf("\n");
    PreorderTraverse(avlRoot,showData);
    printf("\n");
    PostorderTraverse(avlRoot,showData);

    return 0;
}