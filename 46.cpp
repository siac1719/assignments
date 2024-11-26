//know your hat size program

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Define hat sizes and their corresponding circumference ranges (in inches)
    // Format: {min_circumference, max_circumference, US_size, UK_size}
    float hatSizes[8][4] = {
        {20.50, 21.00, 6.5, 6.5},
        {21.01, 21.50, 6.625, 6.625},
        {21.51, 22.00, 6.75, 6.75},
        {22.01, 22.50, 6.875, 6.875},
        {22.51, 23.00, 7.0, 7.0},
        {23.01, 23.50, 7.125, 7.125},
        {23.51, 24.00, 7.25, 7.25},
        {24.01, 24.50, 7.375, 7.375}
    };

    float headCircumference;
    bool sizeFound = false;

    // Input head circumference
    printf("Enter the circumference of your head in inches: ");
    scanf("%f", &headCircumference);

    // Validate the input
    if (headCircumference <= 0) {
        printf("Invalid input. Circumference must be a positive value.\n");
        return 1;
    }

    // Determine hat size
    for (int i = 0; i < 8; i++) {
        if (headCircumference >= hatSizes[i][0] && headCircumference <= hatSizes[i][1]) {
            printf("Your hat size is US: %.3g, UK: %.3g\n", hatSizes[i][2], hatSizes[i][3]);
            sizeFound = true;
            break;
        }
    }

    // If no size is found
    if (!sizeFound) {
        printf("Sorry, we couldn't find a hat size for your circumference.\n");
    }

return 0;
}


