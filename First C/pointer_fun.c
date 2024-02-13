//sum, avg, product using pointers

#include<stdio.h>

void point(int a, int b, int *sum, int *product, int *avg);

int main(){
    int a, b;
    printf("Enter the the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int sum, product, avg;
    point(a, b, &sum, &product, &avg);

    printf("the sum is %d\nthe product is %d\nthe average is %d", sum, product, avg);

    return 0;
}

void point(int a, int b, int *sum, int *product, int *avg){
    *sum = a+b;
    *product = a*b;
    *avg = (a+b)/2;
}