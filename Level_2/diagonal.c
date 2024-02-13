#include <stdio.h>

void input_array(int a, int b, int arr[a][b]);
sumOfDiagonal(int x, int y , int arr1[x][y]);

int main(){
    int x , y;

    printf("size of array(row column): ");
    scanf("%d %d", &x, &y);
    int arr[x][y];

    input_array(x, y, arr);

    sumOfDiagonal(x, y, arr);

    return 0;
}

void input_array(int a, int b, int arr[a][b]){
    for (int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("Enter Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

sumOfDiagonal(int x, int y , int arr1[x][y]){
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            
        }
    }
}