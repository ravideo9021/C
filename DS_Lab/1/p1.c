//Write a program to compute minimum/maximum of a given array.

#include <stdio.h>

void sort(int *arr, int n){
    for(int i = 0; i < n-1; i++){
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
    int n;
    printf("Size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Input Element %d: ", i+1);
        scanf("%d", arr+i);
    }
    sort(arr, n);

    printf("\nMaximum Element: %d", arr[n-1]);
    printf("\nMinimum Element: %d", arr[0]);
    
}