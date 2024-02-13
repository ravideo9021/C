#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x, y, sum, difference;
    float a, b, sumFloat, differenceFloat;
    
    scanf("%d %d\n%f %f", &x, &y, &a, &b);
    

    if(1 <= x <= pow(10, 4) && 1 <= y <= pow(10, 4)){
        sum = x + y;
        difference = x - y;
        sumFloat = a + b;
        differenceFloat = a - b;
    }
    else exit(0); // use exit(0) to exit the program right there

    if(1 <= sum <= pow(10, 4) && 1 <= sum <= pow(10, 4)){ // About power function
        printf("%d %d\n%.1f %.1f", sum, difference, sumFloat, differenceFloat);
    }
    else exit(0);
    
    return 0;
}