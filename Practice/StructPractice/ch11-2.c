#include <stdio.h>

struct person{
    char name[10];
    char gender[4];
    int age;
};

int main(){
    struct person u1 = {"나태희","여",20},u2 = {"유현빈","남",29},u3 = {"나원빈","남",29};
    struct person oldest;

    if(u1.age > u2.age){
        if(u1.age > u3.age){
            oldest = u1;
        }
        else{
            oldest = u3;
        }
    }
    else{
        if(u2.age > u3.age){
            oldest = u2;
        }
        else{
            oldest = u3;
        }
    }
    printf("<<oldest>>\n");

    printf("%s\t%s\t%d\n\n",oldest.name,oldest.gender,oldest.age);

}