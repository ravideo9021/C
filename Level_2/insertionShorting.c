#include <stdio.h>

void insertionShort(int arr[], int n){
    for (int i = 1; i < n; j++){
        int j = i-1;
        int key = arr[i];

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {10, 5, 15, 2, 5};
    insertionShort(arr, 5);

    for (int i = 0; i < 5; i++){
        printf("%d\t", arr[i]);
    }
}