#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct eInfo{
    char *no;
    char *name;
    int children;
    int pay;
} eInfo;

void printOneStructByPtr(eInfo *ptr);
void printOneStructByVal(eInfo info);
int childrenPay(eInfo info);

int main(){
    eInfo employee;
    eInfo *employee2;
    char tmp[100];



    printf("number : ");scanf("%s",tmp);
    employee.no = (char*)malloc(sizeof(char)*strlen(tmp));
    strcpy(employee.no,tmp);
    printf("name : ");scanf("%s",tmp);
    employee.name = (char*)malloc(sizeof(char)*strlen(tmp));
    strcpy(employee.name,tmp);
    printf("children : ");scanf("%d",&employee.children);
    printf("pay : ");scanf("%d",&employee.pay);
    printOneStructByVal(employee);
    printf("자녀수당 >> %d",childrenPay(employee));

}

void printOneStructByPtr(eInfo *ptr){
    printf("number >> %s\n",ptr->no);
    printf("name >> %s\n",ptr->name);
    printf("children >> %d\n",ptr->children);
    printf("pay >> %d\n",ptr->pay);

}

int childrenPay(eInfo info){
    int children = info.children;
    if(children >= 2)
        return 200000;
    else if(children == 1)
        return 100000;
    else
        return 0;
}