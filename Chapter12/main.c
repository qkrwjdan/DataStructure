//#include <stdio.h>
//#include "BinaryTree3.h"
//#include "BinarySearchTree3.h"
//
//int main(void) {
//
//    printf("0");
//    BTreeNode * avlRoot;
//    BTreeNode * clNode;
//    BTreeNode * crNode;
//    printf("1");
//    BSTMakeAndInit(&avlRoot);
//    printf("2");
//
//    BSTInsert(&avlRoot,1);
//    BSTInsert(&avlRoot,2);
//    BSTInsert(&avlRoot,3);
//    BSTInsert(&avlRoot,4);
//    BSTInsert(&avlRoot,5);
//    BSTInsert(&avlRoot,6);
//    BSTInsert(&avlRoot,7);
//    BSTInsert(&avlRoot,8);
//    printf("3");
//
//    printf("루트노드 : %d \n",GetData(avlRoot));
//
//    clNode = GetLeftSubTree(avlRoot);
//    crNode = GetRightSubTree(avlRoot);
//
//    BSTShowAll(avlRoot);
//
//    return 0;
//}