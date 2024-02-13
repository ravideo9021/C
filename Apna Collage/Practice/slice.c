#include <stdio.h>

void slice(char*, int, int);

int main(){
    char str[100];
    int m, n;
    printf("\nEnter a string : ");
    scanf("%s", str);
    printf("\nEnter the index : ");
    scanf("%d %d", &n, &m);
    slice(str, m, n);

return 0;
}

void slice(char str[100], int m, int n){
            char newStr[100];
            int i, j;
            for (i=n, j=0; i<=m; i++, j++){
                newStr[j]= str[i]; 
            }
            newStr[j] = '\0';
            puts(newStr);
}