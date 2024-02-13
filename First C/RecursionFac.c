//program to write factorial of n using recursion
#include<stdio.h>

int fac(int);

int main() {
    int n, f;
    printf("FACTORIAL OF 'N'\n");
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    f = fac(n);
    printf("the factorial of %d is %d ", n, f);
    return 0;
}

int fac(int n) {
    if(n == 1) {
        return 1;
    }
    int facNM = fac(n-1);
    int fac = facNM * n;
    return fac;
}