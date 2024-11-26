//read a number n and print if n is prime or composite
#include <stdio.h>

int main() {
    int n, i, isPrime = 1; // Assume the number is prime

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is neither prime nor composite.\n", n);
        return 0;
    }
//check divisors from n to n/2
    for (i = 2; i <= n / 2; i++) { 
        if (n % i == 0) {
            isPrime = 0; 
            break;
        }
    }
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is a composite number.\n", n);
    }
return 0;
}

