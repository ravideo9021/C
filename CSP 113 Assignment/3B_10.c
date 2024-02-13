//Income Tax Calculation

#include <stdio.h>

int main(){
    char MaratialStatus, name[50];
    int GrossIncome, IncomeAfterAllowance = 0, child, tax = 0;

    printf("Enter your name: ");
    gets(name);

    printf("Enter your Income: ");
    scanf(" %d", &GrossIncome);

    printf("Type 'm' if you are married or 's' if you are single: ");
    scanf(" %c", &MaratialStatus);

    if(MaratialStatus == 'm'){
       printf("How many chlid do you have: ");
       scanf(" %d", &child);
    }

    if (MaratialStatus == 's'){
        IncomeAfterAllowance = GrossIncome - 3600;
    }
    else if (MaratialStatus == 'm'){
        if (child == 0){
        IncomeAfterAllowance = GrossIncome - 6000;
        }
        else IncomeAfterAllowance = GrossIncome - (6000 + child*1200);
    }

    if (IncomeAfterAllowance > 40000){
        tax = IncomeAfterAllowance*0.4;
    }
    else if (IncomeAfterAllowance > 20000){
        tax = IncomeAfterAllowance*0.3;
    }
    else if (IncomeAfterAllowance > 10000){
        tax = IncomeAfterAllowance*0.2;
    }

    printf("Name: ");
    puts(name);
    printf("Status Code: %c", MaratialStatus);
    printf("\nGross Income: %d", GrossIncome);
    printf("\nTaxable Income: %d", IncomeAfterAllowance);
    printf("\nTax: %d", tax);

return 0;
}
