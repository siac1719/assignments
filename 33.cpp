//program to find maximum and minimum from n numbers

#include <stdio.h>

int main() {
    int n, num, max, min;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);

// Input the first number and initialize max and min
    printf("Enter the numbers:\n");
    scanf("%d", &num);
    max = min = num;

// Process the remaining numbers
    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num; 
        }
    }
// Output the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

return 0;
}

