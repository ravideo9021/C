#include<stdio.h>
int main()
{
    int i, n, sum;
    sum=0;
    i=1;
    printf("sum of n numbers\nenter the value of n: ");
    scanf("%d", &n);
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    printf("the sum is: %d", sum);
    return 0;
}