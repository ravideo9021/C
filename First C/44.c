#include<stdio.h>

int main(){
    int a[5];
    for(int i=0; i<5; i++ ){
        printf("Enter number %d: ",i+1);
        scanf("%d", &a[i]);
    }

    printf("the given array in reverse order is: ");

    for(int i=4; i>=0; i--){
        printf("%d ", a[i]);
     }

    return 0;
}
