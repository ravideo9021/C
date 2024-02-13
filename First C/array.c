#include<stdio.h>
int main()
{
    printf("Average of 5 Numbers\n");
    int i, sum=0, a[5];
    float avg;
    for(i=0;i<=4;i++){
        printf("Enter no %d: ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0; i<=4; i++){
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("The Average is: %f", avg);
    return 0;
}