//
// Created by macbook air on 2020-03-26.
//


#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree3.h"
#include "BinarySearchTree3.h"
#include "AVLRebalance.h"

void BSTMakeAndInit(BTreeNode ** pRoot){
    *pRoot = NULL;
}

BSTData BSTGetNodeData(BTreeNode * bst){
    return GetData(bst);
}
//
//void BSTInsert(BTreeNode ** pRoot,BSTData data){ // rootNode인 경우와 그 외.
//    BTreeNode * pNode = NULL; //parent node
//    BTreeNode * cNode = *pRoot; // current node
//    BTreeNode * nNode = NULL; // new node
//
//    while(cNode != NULL)
//    {
//        if(data == GetData(cNode))
//            return;
//
//        pNode = cNode;
//
//        if(GetData(cNode) > data)
//            cNode = GetLeftSubTree(cNode);
//        else
//            cNode = GetRightSubTree(cNode);
//    }
//
//    nNode = MakeBTreeNode();
//    SetData(nNode,data);
//
//    if(pNode != NULL){
//        if(data < GetData(pNode))
//            MakeLeftSubTree(pNode,nNode);
//        else
//            MakeRightSubTree(pNode,nNode);
//    }
//    else{
//        *pRoot = nNode;
//    }
//
//    *pRoot = Rebalance(pRoot);
//}

BTreeNode * BSTInsert(BTreeNode ** pRoot, BSTData data) {
    if(*pRoot == NULL) {
        *pRoot = MakeBTreeNode();
        SetData(*pRoot, data);
    }
    else if(data < GetData(*pRoot)) {
        BSTInsert(&((*pRoot)->left), data);
        *pRoot = Rebalance(pRoot);
    }
    else if(data > GetData(*pRoot)) {
        BSTInsert(&((*pRoot)->right), data);
        *pRoot = Rebalance(pRoot);
    }
    else
        return NULL;

    return *pRoot;
}

BTreeNode * BSTSearch(BTreeNode * bst, BSTData target){
    BTreeNode * cNode = bst;
    BSTData cd;

    while(cNode != NULL)
    {
        cd = GetData(cNode);

        if(target == cd)
            return cNode;
        else if(target < cd)
            cNode = GetLeftSubTree(cNode);
        else
            cNode = GetRightSubTree(cNode);
    }
    return NULL;
}

BTreeNode * BSTRemove(BTreeNode ** pRoot, BSTData target){ // 루트노드와 그 외(단말, 자식1, 자식2)
    BTreeNode * PVRoot = MakeBTreeNode();

    BTreeNode * pNode = PVRoot;
    BTreeNode * cNode = *pRoot;
    BTreeNode * dNode;

    ChangeRightSubTree(PVRoot, *pRoot);

    while(cNode != NULL && GetData(cNode) != target){

        pNode = cNode;
        if(target < GetData(cNode))
            cNode = GetLeftSubTree(cNode);
        else
            cNode = GetRightSubTree(cNode);
    }

    if(cNode == NULL)
        return NULL;

    dNode = cNode;

    if(GetLeftSubTree(dNode) == NULL && GetRightSubTree(dNode) == NULL) //단말노드
    {
        if(GetLeftSubTree(pNode) == dNode)
            RemoveLeftSubTree(pNode);
        else
            RemoveRightSubTree(pNode);
    }
    else if(GetLeftSubTree(dNode) == NULL || GetRightSubTree(dNode) == NULL) // 자식 1
    {
        BTreeNode * dcNode; // 삭제 대상의 자식 노드

        if(GetLeftSubTree(dNode) != NULL)
            dcNode = GetLeftSubTree(dNode);
        else
            dcNode = GetRightSubTree(dNode);

        if(GetLeftSubTree(pNode) == dNode)
            ChangeLeftSubTree(pNode,dcNode);
        else
            ChangeRightSubTree(pNode,dcNode);
    }
    else// 자식 2
    {
        BTreeNode * mNode = GetRightSubTree(dNode);
        BTreeNode * mpNode = dNode;
        int delData;

        while(GetLeftSubTree(mNode) != NULL){
            mpNode = mNode;
            mNode = GetLeftSubTree(mNode);
        }

        delData = GetData(dNode);
        SetData(dNode, GetData(mNode));

        if(GetLeftSubTree(mpNode) == mNode)
            ChangeLeftSubTree(mpNode, GetRightSubTree(mNode));
        else
            ChangeRightSubTree(mpNode, GetRightSubTree(mNode));

        dNode = mNode;
        SetData(dNode, delData);
    }

    if(GetRightSubTree(PVRoot) != *pRoot)
        *pRoot = GetRightSubTree(PVRoot);

    free(PVRoot);
    *pRoot = Rebalance(pRoot);
    return dNode;

}

void ShowIntData(int data){
    printf("%d\n",data);
}

void BSTShowAll(BTreeNode * bst){
    InorderTraverse(bst,ShowIntData);
}