#include <stdio.h>

int main() {
    float basic_salary, da, hra, gross_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate DA and HRA based on basic salary
    da = 0.4 * basic_salary;
    hra = 0.2 * basic_salary;

    // Calculate gross salary
    gross_salary = basic_salary + da + hra;

    printf("Gross salary: %.2f\n", gross_salary);

    return 0;
}
