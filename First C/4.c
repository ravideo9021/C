#include<stdio.h>
int main()
{
    int a;
    int sum=0;

    int num[10];
    for(int i=0;i<10;i++)
    {
        printf("enter the value %d: ",i+1);
        scanf("%d",&num[i]);
    }
    for (int j=0;j<10;j++)
    {
        a=num[j];
        sum=sum+a;
    }
    printf("the sum is %d",sum);
}