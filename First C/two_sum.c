#include <stdio.h>

int main(){
    int arr[10] = {2, 4, 5, 8 ,9};
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++){
        int x = arr[i];
        for (int j = 0; j < 5; j++){
            int y = arr[j];
            if (y == num - x && i != j){
                printf("%d, %d\n", x, y);
            }
        }
    }
    return 0;
}