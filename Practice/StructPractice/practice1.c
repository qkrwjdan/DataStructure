#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 3

struct data{
    int id;
    char date[10];
    int mat1;
    int mat2;
    int mat3;
    int force;
};
typedef struct data Data;

void inputData(Data *ptr);
void outputData(Data *ptr);
int searchData(Data *ptr,int id);
void sortData(Data test[]);

int main(){
    Data list[SIZE];
    Data *ptr = list;
    inputData(ptr);
    outputData(ptr);
    printf("찾는 데이터 3 의 인덱스 : %d \n",searchData(ptr,3));
    sortData(list);
    outputData(ptr);
}

void inputData(Data *ptr){
    for(int i=0;i<SIZE;i++){
        printf("%d 번째 결과 입력\n",i+1);
        printf("id : ");  scanf("%d",&ptr->id);
        printf("날짜 : "); scanf("%s",&ptr->date);
        printf("물질1 : ");scanf("%d",&ptr->mat1);
        printf("물질2 : ");scanf("%d",&ptr->mat2);
        printf("물질3 : ");scanf("%d",&ptr->mat3);
        printf("장력 : "); scanf("%d",&ptr->force);
        ptr++;
        system("clear");
    }
}

void outputData(Data *ptr){
    printf("id  date    mat1    mat2    mat3    force\n");
    for(int i=0;i<SIZE;i++){
        printf("%d\t%s\t%d\t%d\t%d\t%d\n",ptr->id,ptr->date,ptr->mat1,ptr->mat2,ptr->mat3,ptr->force);
        ptr++;
    }
}

int searchData(Data *ptr,int id){
    int index = -1;
    for(int i=0;i<SIZE;i++){
        if(ptr->id == id){
            index = i;
        }
        ptr++;
    }
    if(index == -1){
        printf("there is no data");
        return index;
    }
    return index;
}

void sortData(Data test[]){
    int pass,i;
    Data temp;

    for(pass=1;pass<SIZE;pass++){
        for(int i=0;i<SIZE-pass;i++){
            if(test[i].force > test[i+1].force){
                temp = test[i];
                test[i] = test[i+1];
                test[i+1] = temp;
            }

        }
    }
}