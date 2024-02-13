//To Check even or odd Number

#include <stdio.h>

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num%2 == 0) printf("The given number is even number");

    else printf("The given number is odd number");
        
return 0;
}