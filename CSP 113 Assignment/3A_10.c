//Sum of two Complex Numbers

void complexinput(float*, float*);

#include <stdio.h>

int main(){

    float real1, real2, imaginary1, imaginary2;

    printf("Enter the 'first' complex number the real part and imaginary part: ");
    complexinput(&real1, &imaginary1);

    printf("Enter the 'second' complex number the real part and imaginary part: ");
    complexinput(&real2, &imaginary2);
    
    float realsum = real1 + real2;
    float imaginarysum = imaginary1+imaginary2;

    printf("sum of the given two complex numbers are : %.2f + %.2fi",realsum, imaginarysum);

    return 0;
}

void complexinput(float *real, float *imaginary){
                scanf("%f %f", real, imaginary);
}