#include<stdio.h>
int main()
{
    int i, a[5];
    printf("Input 5 Numbers\n");
    for(i=0; i<=4; i++){
        printf("\nEnter number %d: ", i+1);
        scanf("%d", &a[i]);
    }
    for(int j=1;j<=4; j++){
        for(i=0; i<=3; i++){
            if(a[i]>a[i+1]){
            int n=a[i];
            a[i]=a[i+1];
            a[i+1]=n;
            }
        }
    }
    printf("The given Numbers in accending Order is: ");
    for(i=0; i<=4; i++){
        printf("%d, ", a[i]);
    }
    return 0;

}