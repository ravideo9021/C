#include <stdio.h>

int main(){
    int arr[4][4] = { {0, 2, 0, 0},
                      {10, 0, 0, 1},
                      {0, 0, 5, 0},
                      {4, 0, 0, 0} };

    int c1 = 0, c2 = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (arr[i][j] != 0){
                c1++;
            }else{
                c2++;
            }
        }
    }
        if (c2 > c1){
            printf("Sparse Matrix\n");
            int k = 0;
            int c[3][c1];
            for (int i = 0; i < 4; i++){
                for (int j = 0; j < 4; j++){
                    if (arr[i][j] != 0){
                        c[0][k] = i;
                        c[1][k] = j;
                        c[2][k] = arr[i][j];
                        k++;
                    }
                }
            }
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < c1; j++){
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }       
        }
    return 0;
}     