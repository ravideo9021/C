//Calculate The Cost Price Of An Item

#include<stdio.h>

int main(){

    int SP15, profit15;
    printf("Enter the total selling price of 15 items: ");
    scanf("%d", &SP15);
    printf("Enter the total profit: ");
    scanf("%d", &profit15);

    int CP15 = SP15 - profit15;
    int CP1 = CP15/15;

    printf("the Cost Price of each item is : %d", CP1);

    return 0;
}