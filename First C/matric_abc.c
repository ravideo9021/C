#include <stdio.h>

// Function to input a matrix
void inputMatrix(int matrix[][30], int *m, int *n, const char *name) {
    printf("Enter the order of %s (m x n): ", name);
    scanf("%d %d", m, n);

    printf("Enter the values of %s:\n", name);
    for (int i = 0; i < *m; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < *n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int a[][30], int m, int n, int b[][30], int p, int q, int c[][30]) {
    if (n != p) {
        printf("The given matrices cannot be multiplied.\n");
        return;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][30], int m, int n, const char *name) {
    printf("Matrix %s:\n", name);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[30][30], b[30][30], c[30][30];
    int m, n, p, q;

    printf("MATRIX MULTIPLICATION\n");

    inputMatrix(a, &m, &n, "first matrix");
    inputMatrix(b, &p, &q, "second matrix");

    multiplyMatrices(a, m, n, b, p, q, c);

    displayMatrix(c, m, q, "result");

    return 0;
}
