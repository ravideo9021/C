//Calculate Discount On A Purchase

#include <stdio.h>

int main(){
    int price, quantity, TotalCost;

    printf("Enter the Price per Item : ");
    scanf("%d", &price);

    printf("Enter the Quantity : ");
    scanf("%d", &quantity);

    price = price - price/10;
    TotalCost = price * quantity;
    
    if (quantity > 100 || TotalCost > 5000){
        TotalCost = TotalCost - TotalCost/10;
    }

    printf("The Total Expanses is : %d", TotalCost);

return 0;
}