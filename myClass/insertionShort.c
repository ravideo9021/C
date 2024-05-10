#include <stdio.h>

void insertionShort(int arr[], int n){
    int j, key;
    
    for(int i = 1; i < n; i++){
        key = arr[i];
        j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {2, 56, 23, 5, 67, 23};

    insertionShort(arr, 6);

    for(int i = 0; i < 6; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}