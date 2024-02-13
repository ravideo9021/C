#include <stdio.h>
#include <stdlib.h>

void sort_array(int *);
int search(int, int *);

int main(void){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    //sort_array(arr);

    int x;
    printf("Element to search: ");
    scanf("%d", &x);

    int ele_index = search(x, arr);

    if (ele_index == 0){
        printf("1st place");
    }
    else if(ele_index == 1){
        printf("2nd place");
    }
    else if(ele_index == 2){
        printf("3rd place");
    }
    else printf("%dth place" ,ele_index+1);
    
    return 0;
}

void sort_array(int *arr){
    for (int i = 1; i < 5; i++){
        for (int j = 0; j < 5-i-1; j++){
            if (arr[j] < arr[j+1]){
                int x = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = x;
            }
        }
    }
}

int search(int n, int *arr){
    for (int i = 0; i <= 5; i++){
        if (n == arr[i]){
            return i;
        }
    }
    printf("Element not Found");
    exit(0);
}