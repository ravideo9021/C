#include <stdio.h>

void bubbleShort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int x = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = x;
            }
        }
    }
}

int main(){
    int arr[] = {2, 10, 13, 23, 9, 3};
    bubbleShort(arr, 6);
    for(int i = 0; i < 6; i++){
        printf("%d\t", arr[i]);
    }
}