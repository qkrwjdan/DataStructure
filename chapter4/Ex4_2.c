////
//// Created by macbook air on 2020-03-10.
////
//
//#include <stdio.h>
//#include "stdlib.h"
//
//typedef struct _node{
//    int data;
//    struct _node * next;
//} Node;
//
//int main(void){
//
//    Node * head = NULL;
//    Node * tail = NULL;
//    Node * cur = NULL;
//
//    Node * newNode = NULL;
//    int readData;
//
//    Node dummy;
//
//    head = &dummy;
//    tail = &dummy;
//
//
//    while(1){
//        printf("자연수 입력 : ");
//        scanf("%d",&readData);
//
//        if(readData < 1)
//            break;
//
//        newNode = (Node*)malloc(sizeof(Node));
//        newNode->data = readData;
//        newNode->next = NULL;
//
//        tail->next = newNode;
//        tail = newNode;
//    }
//
//    printf("\n");
//
//    printf("입력받은 데이터의 전체 출력 ! \n");
//    if(head == NULL)
//        printf("저장된 자연수가 존재하지 않습니다.\n");
//    else
//    {
//        cur = head;
//        while(cur->next != NULL){
//            cur = cur->next;
//            printf("%d\n",cur->data);
//        }
//    }
//    printf("\n");
//
//    if(head == NULL)
//        return 0;
//    else{
//        Node *delNode = head;
//        Node *delNextNode = head->next;
//
//        while(delNextNode != NULL){
//            delNode = delNextNode;
//            delNextNode = delNextNode->next;
//
//            printf("%d를 삭제합니다.\n",delNode->data);
//            free(delNode);
//        }
//    }
//    return 0;
//
//}