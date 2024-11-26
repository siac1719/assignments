//program using pointers to count the numbers of words in a given string

#include <stdio.h>

// Function to count the number of words in a string using a pointer
int countWords(char *str) {
    int count = 0;
    int inWord = 0;

    while (*str != '\0') {
        if (*str != ' ' && *str != '\t' && *str != '\n') { 
            if (!inWord) { 
                inWord = 1;
                count++; 
            }
        } else {
            inWord = 0; // Reset for the next word
        }
        str++; 
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = countWords(str);
    printf("The number of words in the string is: %d\n", wordCount);

    return 0;
}

