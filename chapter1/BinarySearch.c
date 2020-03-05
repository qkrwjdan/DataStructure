#include <stdio.h>

int BSearch(int ar[],int len,int target){
    int first = 0;
    int last = len - 1;
    int mid;

    while(first <= last){
        mid = (first + last)/2;

        if(target == ar[mid]){
            return mid;
        }
        else{
            if(target < ar[mid]){
                last = mid-1;
            }
            else{
                first = mid+1;
            }
        }
    }
    return -1;
}

int main(void){
    int ar[] = {1,3,5,7,9};
    int idx;

    idx = BSearch(ar,5,7);
    if(idx == -1){
        printf("대상을 찾을 수 없습니다.\n");
    }
    else
    {
        printf("타겟 저장 인덱스 : %d\n",idx);
    }
    idx = BSearch(ar,sizeof(ar)/sizeof(int),4);
    if(idx == -1){
        printf("대상을 찾을 수 없습니다.\n");
    }
    else
    {
        printf("타겟 저장 인덱스 : %d\n",idx);
    }
}