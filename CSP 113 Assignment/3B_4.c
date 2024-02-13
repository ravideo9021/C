//Arithmetic Operations Based on Some Condition

#include <stdio.h>

int main(){
    int A, B;
    printf("Enter two numbers: ");
    scanf("%d %d", &A, &B);

    if (A == 0 || B == 0) printf("Wrong Entry");
    else if (A > B) printf("Multiplication = %d", A*B);
    else if (A < B) printf("Addition = %d", A+B);
    else if (A == B) printf("Subtraction = %d", A-B);

return 0;
}