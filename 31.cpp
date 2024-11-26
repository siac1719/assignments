 //program to print sum of individual digits of a 'n' digit no.
 
 #include <stdio.h>

int main() {
    int num; 
    int sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        digit = num % 10;  
        sum += digit;      
        num /= 10;         
	    }

    printf("Sum of the digits: %d\n", sum);

return 0;
}

