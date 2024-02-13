#include<stdio.h>

int main(){
    char a[20];
    printf("Enter Your Name: ");
    fgets(a, 20, stdin);
    puts(a);
}
