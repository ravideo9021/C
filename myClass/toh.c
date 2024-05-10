#include <stdio.h>

void toh(char A, char B, char C, int n){
    if(n > 0){
        toh(A, C, B, n-1);
        printf("move disk %d from %c -> %c\n", n, A, C);
        toh(B, A, C, n-1);
    }
}

int main(void){
    int n = 1;
    toh('A', 'B', 'C', n);
}