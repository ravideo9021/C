//To Find The Absolute Value Of A Given Number

#include <stdio.h>

int main(){
    
    float value;
    printf("Enter the Value: ");
    scanf("%f", &value);

    if (value < 0) 
        value = -value;
    
    printf("The Absolue Value of the given no. is %f", value);

return 0;
}