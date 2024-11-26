//program to print fibonacci series 
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d", first); 
        } else if (i == 2) {
            printf(", %d", second); 
        } else {
            next = first + second; 
            printf(", %d", next);
            first = second;      
            second = next;        
        }
    }
return 0;
}

