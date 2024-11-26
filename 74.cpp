//program to merge arrays in a single sorted array and arrange elements in ascending order
#include <stdio.h>

int main() {
    int A[100], B[100], C[200];
    int m, n, i, j, k;

    // Input size of arrays A and B
    printf("Enter the size of array A: ");
    scanf("%d", &m);
    printf("Enter the size of array B: ");
    scanf("%d", &n);

    // Input elements of array A
    printf("Enter elements of array A:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    // Input elements of array B
    printf("Enter elements of array B:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    // Merge arrays A and B into C
    i = j = k = 0;
    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements of A, if any
    while (i < m) {
        C[k++] = A[i++];
    }

    // Copy remaining elements of B, if any
    while (j < n) {
        C[k++] = B[j++];
    }

    // Print the merged array C
    printf("Merged array C:\n");
    for (i = 0; i < m + n; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
