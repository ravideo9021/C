#include <stdio.h>


int main(void)
{
    int n;

    printf("Input height? ");
    scanf("%d", &n);

    if(n <= 0){
        main();
    }else{
        for(int i = n; i > 0; i--){
            for(int j = 2; j <= i; j++){
                printf(" ");
            }

            for(int j = 0; j <= n-i; j++){
                printf("#");
            }

            printf("  ");

            for(int k = 0; k <= n-i; k++){
                printf("#");
            }

            printf("\n");
        }
    }
}