#include <stdio.h>

int main(void){
    int arr[10] = {2, 5, 3, 6 ,1};

    for (int i = 5; i >= 3; i--){
        arr[i] = arr[i-1];
    }
    
    arr[2] = 4;

    for(int i = 0; i <= 5; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}