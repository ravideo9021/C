#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        for(int j=4; j>=i; j--){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
        printf("*");
        }
        printf("\n");
    }
    for(int a=1; a<=4; a++){
        for(int b=1;b<=a;b++){
            printf(" ");
        }
        for(int c=7;c>=2*a-1;c--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}