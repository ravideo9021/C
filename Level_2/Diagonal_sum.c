#include <stdio.h>

int main()
{
    int arr[3][3] = {10, 2, 5, 4 ,15 ,6, 5, 8, 20};
    int sumD1 = 0, sumD2 = 0;
    
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (i==j){
                sumD1 += arr[i][j];}
        }
    }

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (i+j == 2){
                sumD2 += arr[i][j];}
        }
    }

    printf("%d + %d = %d" ,sumD1, sumD2 , sumD1+sumD2);
    return 0;
}