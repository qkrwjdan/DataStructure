//
// Created by macbook air on 2020-03-19.
//

#ifndef CHAPTER8_EXPRESSIONTREE_H
#define CHAPTER8_EXPRESSIONTREE_H

#include "BinaryTree2.h"

BTreeNode * MakeExpTree(char exp[]);
int EvaluateExpTree(BTreeNode * bt);

void ShowPrefixTypeExp(BTreeNode * bt);
void ShowInfixTypeExp(BTreeNode * bt);
void ShowPostfixTypeExp(BTreeNode * bt);


#endif //CHAPTER8_EXPRESSIONTREE_H
