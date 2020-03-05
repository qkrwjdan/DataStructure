#include <stdio.h>

void Hanoi(char start,char temp,char dest,int size){
    if(size == 1){
        printf("size 1 // %c to %c \n",start,dest);
    }else{
        Hanoi(start,dest,temp,size-1);
        printf("size %d // %c to %c\n",size,start,dest);
        Hanoi(temp,start,dest,size-1);
    }
}

int main(void){
    Hanoi('A','B','C',10);
    return 0;
}