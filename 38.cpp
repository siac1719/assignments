//program to print 1,4,9,...n

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 1; i * i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
return 0;
}

