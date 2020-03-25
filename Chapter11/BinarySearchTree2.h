//
// Created by macbook air on 2020-03-25.
//

#ifndef CHAPTER11_BINARYSEARCHTREE2_H
#define CHAPTER11_BINARYSEARCHTREE2_H

#include "BinaryTree3.h"

typedef BTData BSTData;

void BSTMakeAndInit(BTreeNode ** pRoot);

BSTData BSTGetNodeData(BTreeNode * bst);

void BSTInsert(BTreeNode ** pRoot, BSTData);

BTreeNode * BSTSearch(BTreeNode * bst, BSTData target);

BTreeNode * BSTRemove(BTreeNode ** pRoot, BSTData target);

void BSTShowAll(BTreeNode * bst);



#endif //CHAPTER11_BINARYSEARCHTREE2_H
