#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employInfo {
    char *name;
    char *rank;
    int nightPay;
    int basicPay;
    int finalPay;
};
typedef struct employInfo eInfo;

void input(eInfo *info){
    char nTmp[100];
    char rTmp[100];
    
    printf("input name >>");scanf("%s",nTmp);
    info->name = (char*)malloc(sizeof((strlen(nTmp)+1)));
    strcpy(info->name,nTmp);
    printf("input rank >>");scanf("%s",rTmp);
    info->rank = (char*)malloc(sizeof((strlen(rTmp)+1)));
    strcpy(info->rank,rTmp);
    printf("input nightPay >>");scanf("%d",&(info->nightPay));

}

void basicPay(){

}

int main(){
    int size;
    int i;
    eInfo *ptr;
    printf("size >> ");scanf("%d",&size);
    ptr = (eInfo*)malloc(sizeof(eInfo)*size);

    for(i=0;i<size;i++){
        input(ptr);
    }
    for(i=0;i<size;i++){
        printf("%s>>%s>>%d\n",ptr->name,ptr->rank,ptr->nightPay);
    }

}
