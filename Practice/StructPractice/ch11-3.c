#include <string.h>
#include <stdio.h>
#define N 10

struct person{
    char name[10];
    char gender[4];
    int age;
};

int main(){
    struct person user[N] = {{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","여",20},{"나태희","남",20}};

    int male = 0;int female = 0; int sum = 0;
    for(int i = 0;i<N;i++){
        if(strcmp(user[i].gender,"남") == 0)
            male++;
        else
            female++;
        
        sum += user[i].age;
    }
    
    printf("이름    성별    나이\n");
    for(int i = 0;i<N;i++){
        printf("%s\t%s\t%d\n",user[i].name,user[i].gender,user[i].age);
    }
    printf(">> male : %d\n",male);
    printf(">> female : %d\n",female);
    printf(">> avg : %d\n",sum/N);



}