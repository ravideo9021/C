#include <stdio.h>

#define MAX_SIZE 10

// Function prototypes
void matrixAddition(int rows, int cols, int mat1[][MAX_SIZE], int mat2[][MAX_SIZE]);
void matrixSubtraction(int rows, int cols, int mat1[][MAX_SIZE], int mat2[][MAX_SIZE]);
void matrixMultiplication(int rows1, int cols1, int rows2, int cols2, int mat1[][MAX_SIZE], int mat2[][MAX_SIZE]);
void matrixTranspose(int rows, int cols, int mat[][MAX_SIZE]);

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions for matrix 1
    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions for matrix 2
    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if matrix dimensions are compatible for addition, subtraction, and multiplication
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix dimensions are incompatible for addition, subtraction, and multiplication.\n");
        return 1;
    }

    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE];

    // Input elements for matrix 1
    printf("Enter elements for matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for matrix 2
    printf("Enter elements for matrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Matrix Addition:\n");
    matrixAddition(rows1, cols1, matrix1, matrix2);

    printf("Matrix Subtraction:\n");
    matrixSubtraction(rows1, cols1, matrix1, matrix2);

    printf("Matrix Multiplication:\n");
    matrixMultiplication(rows1, cols1, rows2, cols2, matrix1, matrix2);

    printf("Transpose of Matrix 1:\n");
    matrixTranspose(rows1, cols1, matrix1);

    return 0;
}

void matrixAddition(int rows, int cols, int mat1[][MAX_SIZE], int mat2[][MAX_SIZE]) {
    int result[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

void matrixSubtraction(int rows, int cols, int mat1[][MAX_SIZE], int mat2[][MAX_SIZE]) {
    int result[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiplication(int rows1, int cols1, int rows2, int cols2, int mat1[][MAX_SIZE], int mat2[][MAX_SIZE]) {
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return;
    }

    int result[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

void matrixTranspose(int rows, int cols, int mat[][MAX_SIZE]) {
    int transposed[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transposed[i][j] = mat[j][i];
            printf("%d\t", transposed[i][j]);
        }
        printf("\n");
    }
}
