//program to reverse the given number

#include <stdio.h>

int main() {
    int num, reversed = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &num);

// Reverse the number
    while (num != 0) {
        rem = num % 10;          
        reversed = reversed * 10 + rem;  
        num /= 10;
    }
// Output the result
    printf("Reversed number: %d\n", reversed);

    return 0;
}

