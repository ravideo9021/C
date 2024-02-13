#include<stdio.h>

typedef struct complex{
    int real;
    int imaginary;
}com;

int main(){

    com s1;

    printf("Enter the real part of complex number: ");
    scanf("%d", &s1.real);
    printf("Enter the imaginary part of complex number: ");
    scanf("%d", &s1.imaginary);

    printf("the number is: %d+%di", s1.real, s1.imaginary);
    
return 0;
}