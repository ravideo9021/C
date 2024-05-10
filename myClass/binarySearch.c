#include <stdio.h>

void binarySearch(int arr[], int start, int end, int target){
    if(start > end){
        printf("Element not found");
        return;
    }
    int mid = (start+end)/2;

    if(arr[mid] == target){
        printf("Value found at %d position", mid+1);
        return;
    }

    if(arr[mid] < target){
        binarySearch(arr, mid+1, end, target);
    }else{
        binarySearch(arr, start, mid-1, target);
    }
}

int main(){
    int arr[] = {2, 4, 6, 8, 13, 23, 28, 30, 35, 45};
    binarySearch(arr, 0, 9, 35);

    return 0;
}