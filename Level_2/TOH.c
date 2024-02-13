#include <stdio.h>
void TOH(int n, char A, char B, char C);


int main(){
    int n = 4;
    TOH(n, 'A', 'B' ,'C');
}

void TOH(int n, char A, char B, char C){
    if (n == 1){
        printf("Move disk 1 from rod %c -> %c\n", A, C);
        return;
    }

    TOH(n-1, A, C, B);
    printf("Move disk %d from rod %c -> %c\n",n , A, C);
    TOH(n-1, B, A, C);
    
}