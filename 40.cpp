//read numbers till a negative number is entered and calculate sum of a list of numbers read
#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    printf("Enter numbers (negative number to stop):\n");

    while (1) { 
        scanf("%d", &number);

        if (number < 0) {
            break; // Exit the loop if the number is negative
        }
        sum += number;
    }
    printf("Sum of the entered numbers: %d\n", sum);
return 0;
}

