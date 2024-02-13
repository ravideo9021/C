//a 2D array storing the value of 2 and 3
#include<stdio.h>

void multiplicationTable(a[][]);
int main()
{
    int a[4][10];
    for (int i=2; i<4; i++){
        printf("the multipication table of %d is\n", i);
        for(int j=1; j<=10; j++){
            a[i][j] = i*j;
            printf("%d\n", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void multiplicationTable(int n, int a[n][10]){
    for("")
}