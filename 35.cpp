//read a no'n' and print single digit answer as sum of digits of n

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
// Reduce the sum of digits to a single digit
    while (n > 9) {
        sum = 0; // Reset the sum for each loop
        while (n > 0) {
            sum += n % 10; 
            n /= 10;
        }
        n = sum; 
    }
    printf("Single-digit sum: %d\n", n);
return 0;
}

