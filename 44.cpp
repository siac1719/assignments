//program for printing the amount to be paid by the consumer to the electric distribution company

#include <stdio.h>
int main() {
    int units;
    float amount;

// Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

// Calculate the amount to be paid based on consumption
    if (units <= 200) {
        amount = units * 0.50; 
    } else if (units <= 400) {
        amount = 100 + (units - 200) * 0.65; 
    } else if (units <= 600) {
        amount = 230 + (units - 400) * 0.80; 
    } else { // Above 600 units
        amount = 425 + (units - 600) * 1.25; 
    }

    printf("The total amount to be paid: Rs. %.2f\n", amount);
return 0;
}

