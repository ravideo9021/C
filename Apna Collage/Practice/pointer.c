#include<stdio.h>
int main(){

    int *ptr;
    int n = 200;

    ptr = &n;

    printf("%d \n%d", ptr, *ptr);
    
    return 0;
}