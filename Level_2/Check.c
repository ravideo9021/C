#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    
    int n5 = n % 10;
    
    int a = (n - n5)/10;
    int n4 = a % 10;
    
    int b = (a - n4)/10;
    int n3 = b % 10;
    
    int c = (b - n3)/10;
    int n2 = c % 10;
    
    int d = (c - n2)/10;
    int n1 = d % 10;
    
    int sum = n1+n2+n3+n4+n5;
    printf("%d", sum);
    return 0;
}

