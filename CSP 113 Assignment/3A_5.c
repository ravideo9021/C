//Reverse of a given number

#include <stdio.h>
int main(){
    int n, a;
    printf("Enter a five digit number : ");
    scanf("%d", &n);
    for (int i = 0; i<5; i++){
        a = n%10;
        n = n/10;
        printf("%d", a);
    }
return 0;
}