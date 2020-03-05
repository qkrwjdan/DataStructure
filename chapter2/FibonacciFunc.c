#include <stdio.h>

int Fibonacci(int num){

    if(num == 1){
        return 0;
    }
    else if(num == 2){
        return 1;
    }
    else{
        return Fibonacci(num-1) + Fibonacci(num-2); 
    }
}

int main(void){
    int i =1;
    for(i=1;i<15;i++){
        printf("Fibonacci(%d) : %d\n",i,Fibonacci(i));
    }
}