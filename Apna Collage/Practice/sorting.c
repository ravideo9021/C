#include <stdio.h>
#define START int main(){
#define END }

void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

void BubbleSort(int arr[]){
    for (int j = 0; j < 9; j++){
        for (int i = 0; i < 9-j; i++){
            if (arr[i] > arr [i+1]){
                swap(&arr[i], &arr[i+1]);
            }
        }
    }
}

START
    int arr[] = {23, 56, 73, 89, 22, 43, 45, 65, 100, 46};

    BubbleSort(arr);

    for (int i = 0; i<10; i++){
        printf("%d\t", arr[i]);
    }
END