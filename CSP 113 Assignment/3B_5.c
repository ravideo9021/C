//smallest of three numbers
#include <stdio.h>

int main(){
    int r, s, a;
    printf("Enter the age of ram, shayam and ajay : ");
    scanf("%d %d %d", &r, &s, &a);

    if (r<s && r<a) printf("r - %d", r);
    else if (s<r && s<a) printf("s - %d", s);
    else printf("a - %d", a);

return 0;
}