// Swaping of two numbers

#include <stdio.h>

int main(){
    int a, b;
    
    printf("Enter the value of First No. and Second No. respectively : ");
    scanf("%d %d", &a, &b);

     int t = a;
     a = b;
     b = t;

    printf("\nNow the value of First No. = %d\nand Second No. = %d", a, b);

    return 0;
}