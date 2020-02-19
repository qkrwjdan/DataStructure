#include <stdio.h>

struct person{
    char name[10];
    char gender[10];
    int age;
};

int main(){

    int i =0;
    struct person *ptr;
    struct person user[10] = {{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","남",20}};

    ptr = user;
    for(i=0;i<10;i++){
        printf("age :");
        scanf("%d",&ptr->age);
        ptr ++;
    }
    ptr = user;

    printf("이름    성별    나이\n");
    for(int i = 0;i<10;i++){
        printf("%s\t%s\t%d\n",ptr->name,ptr->gender,ptr->age);
        ptr++;
    }
    
    return 0;
}