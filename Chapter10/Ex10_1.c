////
//// Created by macbook air on 2020-03-23.
////
//
//#include <stdio.h>
//
//void swap(int arr[],int idx1, int idx2){
//    int temp = arr[idx1];
//    arr[idx1] = arr[idx2];
//    arr[idx2] = temp;
//}
//
//int SelectCenter(int arr[],int left, int right){
//
////    int mid = (left + right) / 2;
////
////    if(arr[left] > arr[right])
////    {
////        if(arr[mid] < arr[left])
////            return mid;
////        else
////            return left;
////    }else {
////        if (arr[mid] < arr[right])
////            return mid;
////        else
////            return right;
////    }
//
//    int samples[3] = {left,(left+right) / 2, right};
//    if(arr[samples[0]] > arr[samples[1]])
//        swap(samples, 0, 1);
//
//    if(arr[samples[1]] > arr[samples[2]])
//        swap(samples,1,2);
//
//    if(arr[samples[0]] > arr[samples[1]])
//        swap(samples,0,1);
//
//    return samples[1];
//
//}
//
//int Partition(int arr[],int left,int right){
//    int pIdx = SelectCenter(arr,left,right);
//    int pivot = arr[pIdx];
//
//    int low = left + 1;
//    int high = right;
//
//    swap(arr,left,pIdx);
//
//    printf("피벗 : %d \n",pivot);
//
//    while(low <= high){
//        while(pivot >= arr[low] && low <= right)
//            low++;
//
//        while(pivot <= arr[high] && high >= (left+1))
//            high--;
//
//        if(low <= high)
//            swap(arr,low,high);
//    }
//    swap(arr,left,high);
//    return high;
//}
//
//void QuickSort(int arr[], int left, int right){
//    if(left <= right)
//    {
//        int pivot = Partition(arr,left,right);
//        QuickSort(arr,left,pivot-1);
//        QuickSort(arr,pivot+1,right);
//    }
//}
//
//int main(void){
//    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
////    int arr[3] = {3,3,3};
//
//    int len = sizeof(arr) / sizeof(int);
//    int i;
//
//    QuickSort(arr,0, sizeof(arr)/ sizeof(int) -1);
//
//    for(i=0;i<len;i++)
//        printf("%d ",arr[i]);
//
//    printf("\n");
//    return 0;
//
//
//}
