#include<stdio.h>
int main(){
    int n;
    printf("Enter the Year: ");
    scanf("%d", &n);

    if(n%4==0 && n%100!=0){
        printf("Leap Year");
    }
    else if(n%400==0){
        printf(" the entered year is Leap Year");
    }
    else{printf("Not a Leap Year");}
    return 0;
}