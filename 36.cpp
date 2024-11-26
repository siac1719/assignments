//program to print 1,3,5,7,9...,n.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
  printf("\n");
return 0;
}

