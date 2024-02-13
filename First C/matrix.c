#include<stdio.h>
int main(){
    int a[30][30], b[30][30], c[30][30];
    int i, j, k, p, q, m, n;
    
    printf("MULTIPLICATION OF TWO MATRIX\n");
    
    printf("Enter the order of first matrix(m x n): ");
    scanf("%d %d", &m, &n);

    for(i=0; i<m; i++){
        printf("\nEnter the values of row %d: ", i+1);
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the value of Second matrix(p x q): ");
    scanf("%d %d", &p, &q);
    
    for(i=0; i<p; i++){
        printf("\nEnter the values of row %d: ", i+1);
        for(j=0; j<q; j++){
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    
    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            c[i][j]=0;
            }
    }

    if(n==p){
        printf("\nthe multiplicatin gives the following result\n");
        for(i=0; i<m; i++){
            for(j=0; j<q; j++){
                for(k=0; k<n; k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("The given matrices can not be multiplied");
    }
    return 0;
}