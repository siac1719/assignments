//program to check whether given no is armstrong or not

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, rem, n = 0;
    double result;
    
    printf("Enter a number: ");
    scanf("%d", &num);
num = originalNum;
// Find the number of digits
    while (num != 0) {
        num /= 10;
        n++;
    }
    num= originalNum;
// Calculate the sum of each digit raised to the power n
    while (originalNum != 0) {
        rem= originalNum % 10; 
        result += pow(rem, n); 
        originalNum /= 10;           
    }
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

