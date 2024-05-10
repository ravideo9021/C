#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int low, int mid, int high){
    int i = low, j = mid+1, k = 0;

    int *b = (int *)malloc((high-low+1) * sizeof(int));
    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            b[k] = arr[i];
            i++, k++;
        }else{
            b[k] = arr[j];
            j++, k++;
        }
    }
    while(i <= mid){
        b[k] = arr[i];
        i++, k++;
    }
    while(j <= high){
        b[k] = arr[j];
        j++, k++;
    }
    k = 0;
    for(int i = low; i <= high; i++){
        arr[i] = b[k];
        k++;
    }
    free(b);

}

void mergeSort(int arr[], int low, int high){
    if(low < high){
        int mid = low + (high-low)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}

int main(void){
    int arr[] = {2, 10, 4, 17, 18, 3, 15, 8, 10, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
}