#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Odd Nubers.txt", "w");

    int n;

    printf("Odd Numbers From 1 to n:");
    printf("\nEnter n: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n){
        if (i % 2 != 0){
           fprintf(fptr, "%d\t", i);
        }
        i++;
    }

    fclose(fptr);
return 0;
}