//program to check whether given no is prime or not

#include <stdio.h>

int main() {
    int num, i, isPrime = 1; 

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0; 
            break;
        }
    }
// Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
return 0;
}

