//program to write sum of all odd and even numbers between 1 to n

#include <stdio.h>
int main() {
    int n, i, evenSum = 0, oddSum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;
	    } else {
            oddSum += i;  
        }
    }
    // Print the results
    printf("Sum of even numbers between 1 and %d: %d\n", n, evenSum);
    printf("Sum of odd numbers between 1 and %d: %d\n", n, oddSum);

    return 0;
}

