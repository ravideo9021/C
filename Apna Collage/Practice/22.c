#include<stdio.h>
int main()
{
    int i, n, fac=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        fac=fac*i;
    }
    printf("The Factorial of %d is %d", n, fac);
    return 0;
}