#include <stdio.h>

typedef struct member{
    char id[10];
    char passwd[10];
    int age;
    char name[10];
} member;

int main(){
    member members = {"smartC","sm8448",20,"신세대"};
    printf("%s\t%s\t%d\t%s",members.id,members.passwd,members.age,members.name);
}