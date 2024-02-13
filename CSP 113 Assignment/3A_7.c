//Division Of Given Amount into Specified Denominations 

#include <stdio.h>
int main(){

    int WithdrawAmount;
    printf("Enter the Amount you want to Withdraw : ");
    scanf("%d", &WithdrawAmount);

    int A100 = WithdrawAmount/100;
    int remain1 = WithdrawAmount - A100*100;
    int A50 = remain1/50;
    int A10 = (remain1 - A50*50)/10;

    printf("No. of currency notes of each denomination is :\n100s = %d\n50s = %d\n10s = %d", A100, A50, A10);

    return 0;
}