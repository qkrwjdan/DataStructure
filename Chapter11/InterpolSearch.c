//
// Created by macbook air on 2020-03-24.
//

#include <stdio.h>

int ISearch(int ar[],int first, int last, int target){
    int mid;

    if(ar[first] > target || ar[last] < target)
        return -1;

    mid = ((double)(target-ar[first])*(last-first)/(ar[last]-ar[first])) + first;

    if(ar[mid] == target)
        return mid;
    else if(ar[mid] > target)
        return ISearch(ar,first,mid-1,target);
    else
        return ISearch(ar,mid,last,target);

}

int main(void){

    int arr[] = {1,3,5,7,9};
    int idx;

    idx = ISearch(arr,0, sizeof(arr)/ sizeof(int) -1,7);
    if(idx == -1)
        printf("탐색 실패\n");
    else
        printf("idx : %d\n",idx);

    idx = ISearch(arr,0, sizeof(arr)/ sizeof(int) -1,10);
    if(idx == -1)
        printf("탐색 실패\n");
    else
        printf("idx : %d\n",idx);


}