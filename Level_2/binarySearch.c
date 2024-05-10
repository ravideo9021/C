#include <stdio.h>
#define size 10

int search(int arr[], int start, int end, int x){
    if(start > end){
        return -1;
    }
    int mid = start + (end-start)/2;
    
    if(arr[mid] == x){
        return mid;
    }
    if(x > arr[mid]){
        return search(arr, mid+1, end, x);
    }else{
        return search(arr, start, mid-1, x);
    }
}

int main(){
    int arr[size] = {2, 4, 6, 7, 10, 12, 15 , 18, 20, 22};
    printf("Element Found at %d", search(arr, 0, 9, 20));
}
