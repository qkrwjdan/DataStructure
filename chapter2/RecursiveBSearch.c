#include <stdio.h>

int RecursiveBSearch(int ar[],int first,int last,int target)
{
    int mid = (first + last)/2;

    if(first > last){
        return -1;
    }
    
    if(ar[mid] == target){
        return mid;
    }
    else if(target > ar[mid]){
        return RecursiveBSearch(ar,mid+1,last,target);
    }
    else{
        return RecursiveBSearch(ar,first,mid-1,target);
    }
}

int main(void)
{
    int arr[] = {1,3,5,7,9};
    int result = RecursiveBSearch(arr,0,sizeof(arr)/sizeof(int),7);
    printf("탐색결과 : %d",result);
    return 0;
}