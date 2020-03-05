#include <stdio.h>

int Factorial(int num){
    if(num == 2)
        return 2;
    return num * Factorial(num-1);
}

int main(void){
    int num = Factorial(9);
    printf("%d",num);
}