//program to find the product of 2 matrices using pointer using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **A, int **B, int **C, int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int m, n, p;

    printf("Enter the dimensions of matrix A (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the dimensions of matrix B (n x p): ");
    scanf("%d", &p);

    // Allocate memory for matrices A, B, and C
    int *A = (int *)malloc(m * sizeof(int *));
    int *B = (int *)malloc(n * sizeof(int *));
    int *C = (int *)malloc(m * sizeof(int *));

    for (int i = 0; i < m; i++) {
        A[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        B[i] = (int *)malloc(p * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        C[i] = (int *)malloc(p * sizeof(int));
    }

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices(A, B, C, m, n, p);

    printf("Product of matrices A and B:\n");
    printMatrix(C, m, p);

    // Free the allocated memory
    for (int i = 0; i < m; i++) {
        free(A[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
