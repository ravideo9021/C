//Pattern Printing

#include <stdio.h>

int main(){
    
    int n;
    
    printf("Enter the Value of n: ");
    scanf(" %d", &n);
    
    for(int i=n-1; i>=0; i--){
        printf(" ");
        for(int j=0; j<n-i; j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}