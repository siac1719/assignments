//program to count the number of vowels in a string using pointer
#include <stdio.h>
#include <string.h>

int countVowels(char *str) {
    int count = 0;
    char *ptr = str;

    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            count++;
        }
        ptr++;
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int vowelCount = countVowels(str);

    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}
