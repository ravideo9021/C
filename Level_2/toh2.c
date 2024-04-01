#include <stdio.h>

void TOH(int n, char A, char B, char C){
    if (n > 0){
        TOH(n-1, A, C, B);
        printf("Move disk %d from rod %c -> %c\n",n , A, C);
        TOH(n-1, B, A, C);
    }
}

int main(){
    int n = 3;
    TOH(n, 'A', 'B' ,'C');
}