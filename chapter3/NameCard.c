//
// Created by macbook air on 2020-03-09.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

NameCard * MakeNameCard(char * name, char * phone){
    NameCard * pNameCard;
    pNameCard = (NameCard *)malloc(sizeof(NameCard));
    strcpy(pNameCard->name,name);
    strcpy(pNameCard->phone,phone);
    return pNameCard;
}

void ShowNameCardInfo(NameCard * pcard){
    printf("이름 : %s\n",pcard->name);
    printf("전화번호 : %s\n",pcard->phone);
}

int NameCompare(NameCard * pcard, char * name){
    return strcmp(pcard->name,name);
}

void ChangePhoneNum(NameCard * pcard, char * phone){
    strcpy(pcard->phone,phone);
}