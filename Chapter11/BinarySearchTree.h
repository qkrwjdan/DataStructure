//
// Created by macbook air on 2020-03-24.
//

#ifndef CHAPTER11_BINARYSEARCHTREE_H
#define CHAPTER11_BINARYSEARCHTREE_H

#include "BinaryTree2.h"

typedef BTData BSTData;

void BSTMakeAndInit(BTreeNode ** pRoot);

BSTData BSTGetNodeData(BTreeNode * bst);

void BSTInsert(BTreeNode ** pRoot,BSTData data);

BTreeNode * BSTSearch(BTreeNode * bst, BSTData target);

#endif //CHAPTER11_BINARYSEARCHTREE_H
