#include <stdio.h>

int fact(int);

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    int a = fact(n);
    printf("%d", a);

return 0;
}

int fact (int n){
    if (n==1 || n==0){
        return 1;
    }

    int factN = fact(n-1) * n;

return factN;
}