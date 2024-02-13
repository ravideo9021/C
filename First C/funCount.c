#include <stdio.h>

int count(char *);

int main()
{
    char a[]="Ravi Deo";
    int x = count(a);
    printf("%d", x);
    return 0;
}

int count(char *p){
    int i = 0, c = 0;
    while(p[i] != '\0'){
        i++;
        c++;
    }
    return c;
}