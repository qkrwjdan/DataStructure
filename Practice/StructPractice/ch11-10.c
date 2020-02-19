#include <stdio.h>
#include <stdlib.h>

int main(){
    int size,sum,i;
    int *score;

    printf("학생수 : ");scanf("%d",&size);


    score = (int *)malloc(sizeof(int)*size);

    if(score == NULL){
        printf("fail\n");
        exit(1);
    }

    sum = 0;
    for(i=0;i<size;i++){
        printf("%d 번째 학생의 점수는 ?",i+1);
        scanf("%d",&score[i]);
        sum += score[i];
    }

    for(i=0;i<size;i++){
        printf("점수 : %d\n",score[i]);
    }
    printf("합계 : %d\n",sum);

}