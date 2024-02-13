#include<stdio.h>
int main()
{
    int a;
    printf("Enter the marks: ");
    scanf("%d", &a);

    if(a>=90 && a<=100) {
    printf("Geade: A+");
    }
    else if(a >= 80 && a < 90) {
    printf("Grade: B");
    }
    else if(a >= 70 && a < 80) {
    printf("Grade: C");
    }
    else {
    printf("Padhai Kar Mc");
    }
    return 0;
}