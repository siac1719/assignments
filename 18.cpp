//program to read three numbers and print max using conditional (?:) operator

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using conditional operator to find the maximum
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Output the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
