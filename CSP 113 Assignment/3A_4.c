//sum of digit of a number

#include <stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter a Five digit number : ");
    scanf("%d", &n);

    for(int i = 1; i<=5; i++){
        sum = sum + n%10;
        n = n/10;
    }

    printf("The Sum of its digit is : %d", sum);

return 0;
}