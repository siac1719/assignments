/*program to declare a structure with data members employee number, employee name and basic pay of the employee
declare a structure pointer and an array employ with 50 element, the program should read 'N' employee details and 
print the list of all employee along with the basic pay */

#include <stdio.h>
#include <string.h>

struct Employee {
    int emp_no;
    char emp_name[50];
    float basic_pay;
};

int main() {
    struct Employee emp[50], *ptr;
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

// Read employee details
    printf("Enter employee details:\n");
    for (i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("  Employee Number: ");
        scanf("%d", &emp[i].emp_no);
        printf("  Employee Name: ");
        scanf("%s", emp[i].emp_name);
        printf("  Basic Pay: ");
        scanf("%f", &emp[i].basic_pay);
    }

// Print employee details
    printf("\nEmployee Details:\n");
    ptr = emp;
    for (i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("  Employee Number: %d\n", ptr->emp_no);
        printf("  Employee Name: %s\n", ptr->emp_name);
        printf("  Basic Pay: %.2f\n", ptr->basic_pay);
        ptr++;
    }
return 0;
}



