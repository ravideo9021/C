#include <stdio.h>

int main(){
    int x = 5;
    int *ptr = &x;
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("%p\n", &x);
    printf("%p", &ptr);

}