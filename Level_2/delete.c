#include <stdio.h>

int main(void){
    int arr[10] = {2, 5, 34, 6 ,1, 4};

    for (int i = 4; i <= 5; i++){
        arr[i] = arr[i+1];
    }
    
    for(int i = 0; i <= 4; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}