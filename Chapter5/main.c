//#include <stdio.h>
//#include "CLinkedList.h"
//
//int main(void) {
//    List list;
//    int data, i ,nodeNum;
//    ListInit(&list);
//
//    LInsert(&list,3);
//    LInsert(&list,4);
//    LInsert(&list,5);
//    LInsertFront(&list,2);
//    LInsertFront(&list,1);
//
//    if(LFirst(&list,&data))
//    {
//        printf("%d\t",data);
//        for(i=0;i<LCount(&list)*3-1;i++){
//            if(LNext(&list,&data))
//                printf("%d\t",data);
//        }
//    }
//
//    printf("\n");
//
//    nodeNum = LCount(&list);
//
//    if(nodeNum != 0){
//        LFirst(&list,&data);
//        if(data % 2 == 0)
//            LRemove(&list);
//
//        for(i=0;i<nodeNum-1;i++){
//            LNext(&list,&data);
//            if(data % 2 == 0)
//                LRemove(&list);
//        }
//    }
//
//    if(LFirst(&list,&data)){
//        printf("%d\t",data);
//
//        for(i=0;i<LCount(&list)-1;i++){
//            if(LNext(&list,&data))
//                printf("%d\t",data);
//        }
//    }
//
//    return 0;
//
//}