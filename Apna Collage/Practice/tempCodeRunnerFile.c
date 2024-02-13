#include <stdio.h>
#include <stdlib.h>
#define START int main()\
                {
#define END }
#define sum(a,b) (a+b)

#include "SwapFunction.c"

START
    printf("\n%d", sum(5,10));
    int *ptr = malloc(20);
    ptr[0]= 10;
    ptr[1]= 20;
    ptr[3]= 30;
    ptr[4]= 23;

    printf("\n%d\n%d\n%d\n%d", ptr[0], ptr[1], ptr[3], ptr[4]);
    
    int a = 5, b = 10;
    swap(&a, &b);
    printf("\nA = %d, B = %d", a, b);

    printf("\nTime is: %s", _TIME_);
    printf("\nDate is: %s", _DATE_);
    printf("\nLine is: %d", _LINE_);
    printf("\nFile is: %s", _FILE_);

 return 0;
 END

