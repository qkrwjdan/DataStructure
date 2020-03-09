//
// Created by macbook air on 2020-03-09.
//

#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

int main(){
    List list;
    NameCard * tmp;
    char name[100] = "";

    ListInit(&list);

    tmp = MakeNameCard("park","010-8888-0000");
    LInsert(&list,tmp);
    tmp = MakeNameCard("ji","010-9999-0000");
    LInsert(&list,tmp);
    tmp = MakeNameCard("ju","010-1111-0000");
    LInsert(&list,tmp);

    printf("찾고싶은 이름을 입력하세요 : ");
    scanf("%s",name);
    printf("%s\n",name);

    if(LFirst(&list,&tmp)){
        if(NameCompare(tmp,name) == 0)
            ShowNameCardInfo(tmp);
        while(LNext(&list,&tmp)){
            if(NameCompare(tmp,name) == 0)
                ShowNameCardInfo(tmp);
        }
    }

    printf("수정하고 싶은 이름을 입력하세요 : ");
    scanf("%s",name);
    printf("%s\n",name);

    if(LFirst(&list,&tmp)){
        if(NameCompare(tmp,name) == 0)
            ChangePhoneNum(tmp,"010-0000-0000");
        while(LNext(&list,&tmp)){
            if(NameCompare(tmp,name) == 0)
                ChangePhoneNum(tmp,"010-0000-0000");
        }
    }

    printf("삭제하고 싶은 이름을 입력하세요 : ");
    scanf("%s",name);
    printf("%s\n",name);

    if(LFirst(&list,&tmp)){
        if(NameCompare(tmp,name) == 0) {
            LRemove(&list);
            free(tmp);
        }
        while(LNext(&list,&tmp)){
            if(NameCompare(tmp,name) == 0){
                LRemove(&list);
                free(tmp);
            }
        }
    }
    if(LFirst(&list,&tmp)){
        ShowNameCardInfo(tmp);
        while(LNext(&list,&tmp)){
            ShowNameCardInfo(tmp);
        }
    }




}