/*Write a program to perform following operations in matrix:
a. Addition
b. Subtraction
c. Multiplication
d. Transpose */
#include <stdio.h>

void input_array(int a, int b, int arr[a][b]);
void Addition(int x, int y, int m, int n, int arr1[x][y], int arr2[m][n]);
void Subtraction(int x, int y, int m, int n, int arr1[x][y], int arr2[m][n]);
void Multiplication(int x, int y, int m, int n, int arr1[x][y], int arr2[m][n]);
void Transpose(int x, int y, int arr[x][y]);

int main(){
    int x , y, m, n;

    printf("size of first array(row column): ");
    scanf("%d %d", &x, &y);
    int arr1[x][y];

    input_array(x, y, arr1);

    printf("\nsize of Second array(row column): ");
    scanf("%d %d", &m, &n);
    int arr2[m][n];

    input_array(m, n, arr2);

    printf("\nMatrix Addition\n");
    Addition(x, y, m ,n, arr1, arr2);

    printf("\nMatrix Subtraction\n");
    Subtraction(x, y, m ,n, arr1, arr2);

    printf("\nMatrix Multiplication\n");
    Multiplication(x, y, m ,n, arr1, arr2);
    
    printf("\nTranspose of Matrix 1:\n");
    Transpose(x, y, arr1);

    return 0;
}

void input_array(int a, int b, int arr[a][b]){
    for (int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("Enter Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void Addition(int x, int y, int m, int n, int arr1[x][y], int arr2[m][n]) {
    int sum[x][y];

    if (x == m && y == n) {
        // Initialize array elements to 0
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                sum[i][j] = 0;
            }
        }

        // Perform matrix addition
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        // Print the sum matrix
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Can't sum these arrays. Dimensions are different.\n");
    }
}


void Subtraction(int x, int y, int m, int n, int arr1[x][y], int arr2[m][n]) {
    int difference[x][y];

    if (x == m && y == n) {
        // Initialize array elements to 0
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                difference[i][j] = 0;
            }
        }

        // Perform matrix subtraction
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                difference[i][j] = arr1[i][j] - arr2[i][j];
            }
        }

        // Print the subtracted matrix
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                printf("%d\t", difference[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Can't subtract these arrays. Dimensions are different.\n");
    }
}


void Multiplication(int x, int y, int m, int n, int arr1[x][y], int arr2[m][n]) {
    int product[x][y];

    if (y == m) {
        // Initialize array elements to 0
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                product[i][j] = 0;
            }
        }

        // Perform matrix multiplication
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < y; k++){
                    product[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        // Print the product matrix
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Can't multiply these arrays. Dimensions are different.\n");
    }
}


void Transpose(int x, int y, int arr[x][y]){
    int transpose[x][y];
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                transpose[i][j] = 0;
            }
        }
        
        // prform matrix transpose
        for (int i = 0; i < y; i++) {
           for (int j = 0; j < x; j++) {
                transpose[i][j] = arr[j][i];
           }
        }

        // printing the transpose matrix
        for (int i = 0; i < y; i++) {
           for (int j = 0; j < x; j++) {
                printf("%d\t", transpose[i][j]);
           }
           printf("\n");
        }
}