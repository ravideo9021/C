//Counting of Positive Numbers, Negative Numbers and Zeros
#include <stdio.h>

int main (){

    int n, c0=0, cN=0, cP=0;
    printf("how many numbers are you going to enter: ");
    scanf(" %d", &n);

    int a[n];

    for (int i=0; i<n; i++){
        printf("Enter no %d: ", i+1);
        scanf(" %d", &a[i]);

        if (a[i]==0) c0++;
        else if (a[i]>0) cP++;
        else cN++;
    }

    printf("No. of positive Number = %d\n", cP);
    printf("No. of negative Number = %d\n", cN);
    printf("No. of zeros = %d",c0);

return 0;
}
