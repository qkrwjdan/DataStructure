#include <stdio.h>
#define N 5

struct employee{
    char name[12];
    char id[12];
    int salary;
};

void inputSalaryByAddress(struct employee *ptr);
void outputSalaryByValue(struct employee emp);

int main(){
    struct employee e1[N] = {{"박정무","idasd001",5000},{"박정무","idasd001",5000},{"박정무","idasd001",5000},{"박정무","idasd001",5000},{"박정무","idasd001",5000}};
    struct employee *ptr = e1;

    inputSalaryByAddress(ptr);

    printf("이름    아이디  월급\n");
    for(int i=0;i<N;i++){
        outputSalaryByValue(e1[i]);
    }

}

void inputSalaryByAddress(struct employee *ptr){
    for(int i=0;i<N;i++){
        printf("급여는 ? ");
        scanf("%d",&ptr->salary);
        ptr++;
    }
}

void outputSalaryByValue(struct employee emp){
    printf("%s\t%s\t%d\n",emp.name,emp.id,emp.salary);
}