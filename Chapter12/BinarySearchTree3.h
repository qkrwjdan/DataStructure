//
// Created by macbook air on 2020-03-26.
//

#ifndef CHAPTER12_BINARYSEARCHTREE3_H
#define CHAPTER12_BINARYSEARCHTREE3_H

#include "BinaryTree3.h"

typedef BTData BSTData;

void BSTMakeAndInit(BTreeNode ** pRoot);

BSTData BSTGetNodeData(BTreeNode * bst);

BTreeNode * BSTInsert(BTreeNode ** pRoot, BSTData);

BTreeNode * BSTSearch(BTreeNode * bst, BSTData target);

BTreeNode * BSTRemove(BTreeNode ** pRoot, BSTData target);

void BSTShowAll(BTreeNode * bst);


#endif //CHAPTER12_BINARYSEARCHTREE3_H
