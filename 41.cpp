//read a number n and print factor of n
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0; // Exit program for invalid input
    }
    printf("Factors of %d are: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) { // Check if i is a factor of n
            printf("%d ", i);
        }
}
return 0;
}

