//program to print sum of n natural numbers using recursion

#include<stdio.h>

int SumN(int);

int main(){
    int n, s;
    printf("sum of 'n' natural numbers\n");
    printf("Enter the value of n : ");
    scanf("%d", &n);
    s = SumN(n);
    printf("the sum of %d natural numbers are %d", n, s);
return 0;
}

int SumN(int n) {
    if(n == 1) {
        return 1;
    }
    int SumNM = SumN(n-1);
    int SumN = SumNM + n;
    return SumN;
}