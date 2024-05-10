#include <stdio.h>
#include <limits.h>

double power(double base, double exponent, double result){
    if (exponent < INT_MIN || exponent > INT_MAX){
        return 0;
    }
    if (exponent < 0){
        base = (double)(1.0)/(double)(base);
        exponent = -(long long)exponent;
    }
    if (exponent > 0){
        if((int)exponent % 2 == 1){
            result *= base;
            exponent--;
        }
        base *= base;
        exponent /= 2;
        return power(base, exponent, result);
    }
    if(exponent < 0)
        result = (double)(1.0)/(double)(exponent);
    return result;
}

int main() {
    double result = 1.0000;
    result = power(2, -2147483648, result);
    printf("Result = %f", result);

    return 0;
}