#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionShort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int min_index = i;
        for (int j = i+1; j < n; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        if(i != min_index){
            swap(&arr[min_index], &arr[i]);
        }
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}

int main(){
    int arr[] = {9, 4, 2, 6, 7, 11, 4, 10, 23, 15};
    selectionShort(arr, 10);
    printArray(arr, 10);
}