//program to read two no.s and perform specific tasks (using arithmetic operator) and perform using switch case (case in char form)

#include<stdio.h>

int main() {
    int num1, num2, result;
    char operator1;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator1);

    switch (operator1) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
