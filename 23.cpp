//program to read two no.s and calculate the powers without using <math.h>#include <stdio.h>
#include<stdio.h>
int main() {
    int num1, num2, result = 1;

    printf("Enter the base number ");
    scanf("%d", &num1);

    printf("Enter the exponent number:");
    scanf("%d", &num2);

    for (int i = 0; i < num2; i++) {
        result *= num1;
    }
	printf("%d raised to the power of %d is %d\n", num1, num2, result);

    return 0;
}
