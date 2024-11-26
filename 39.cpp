
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Calculate factorial for the current term
        long long factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        // Add the current term to the sum
        sum += (double)i / factorial;
    }

    printf("Sum of the series up to %d terms: %.6lf\n", n, sum);

    return 0;
}

