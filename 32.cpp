//program to findout max and second max from 'n'no.s

#include <stdio.h>
 int main() {
    int n, num, max, secondmax;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (int i =0; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            secondmax = max;
            max = num;
        } else if (num > secondmax) {
            secondmax = num;
        }
    }

    // Output the results
    printf("Maximum: %d\n", max);
    printf("Second Maximum: %d\n", secondmax);

    return 0;
}

