////
//// Created by macbook air on 2020-03-24.
////
//
//#include <stdio.h>
//#include "BinarySearchTree.h"
//
//int main(void){
//    BTreeNode * bstRoot;
//    BTreeNode * sNode;
//
//    BSTMakeAndInit(&bstRoot);
//
//    BSTInsert(&bstRoot,1);
//    BSTInsert(&bstRoot,3);
//    BSTInsert(&bstRoot,2);
//    BSTInsert(&bstRoot,6);
//    BSTInsert(&bstRoot,7);
//    BSTInsert(&bstRoot,9);
//    BSTInsert(&bstRoot,5);
//    BSTInsert(&bstRoot,8);
//
//    sNode = BSTSearch(bstRoot,1);
//    if(sNode == NULL)
//        printf("탐색살패 \n");
//    else
//        printf("key : %d\n",BSTGetNodeData(sNode));
//
//    sNode = BSTSearch(bstRoot,3);
//    if(sNode == NULL)
//        printf("탐색살패 \n");
//    else
//        printf("key : %d\n",BSTGetNodeData(sNode));
//
//    sNode = BSTSearch(bstRoot,6);
//    if(sNode == NULL)
//        printf("탐색살패 \n");
//    else
//        printf("key : %d\n",BSTGetNodeData(sNode));
//
//    sNode = BSTSearch(bstRoot,7);
//    if(sNode == NULL)
//        printf("탐색살패 \n");
//    else
//        printf("key : %d\n",BSTGetNodeData(sNode));
//
//
//}