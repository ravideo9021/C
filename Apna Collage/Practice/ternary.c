#include<stdio.h>
int main()
{
    int a;
    printf("Enter Marks: ");
    scanf("%d", &a);
    a>70 ? printf("PASS")  : printf("FAIL");
    return 0;
}