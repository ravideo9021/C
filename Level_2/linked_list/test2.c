#include <stdio.h>


int main(void){
    char s[] = "hello";
    printf("%c", *s);
    printf("%c", *s+1);
    printf("%c", *s+2);
    printf("%c", *(s+3));
    printf("%c\n", *(s+4));
}