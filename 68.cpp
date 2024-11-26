//program to read two 3*3 matrices and multiply their values and store in third matrix

#include <stdio.h>  
int main() {
  int matrix1[3][3], matrix2[3][3], product[3][3];
  int i, j, k;

    printf("Enter the elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        printf("Element [%d][%d]: ", i + 1, j + 1);
        scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            product[i][j] = 0; 
        }
    }

    // Calculate the product of the two matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                product[i][j] = product[i][j]+ matrix1[i][k] * matrix2[k][j];
            }
        }
    }
  // Print the resultant matrix
    printf("Product of the two matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
