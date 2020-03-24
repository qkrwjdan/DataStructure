////
//// Created by macbook air on 2020-03-24.
////
//
//#include <stdio.h>
//
//int BSearchRecursive(int ar[],int first, int last, int target){
//
//    if(first > last)
//        return -1;
//
//    int mid = (first+last) / 2;
//
//    if(ar[mid] == target)
//        return mid;
//    else if(ar[mid] > target)
//        return BSearchRecursive(ar,first,mid,target);
//    else
//        return BSearchRecursive(ar,mid-1,last,target);
//
//}
//
//int main(void){
//
//    int arr[] = {1,3,5,7,9};
//    int idx;
//
//    idx = BSearchRecursive(arr,0, sizeof(arr)/ sizeof(int),3);
//    printf("%d\n",idx);
//    return 0;
//
//}