//write a c program to copy a string in reverse order to another string variable using pointers
#include <stdio.h>
#include <string.h>

void reverseString(char *str1, char *str2) {
    int len = strlen(str1);
    int i;

// Initialize pointers to the beginning and end of str1
    char *ptr1 = str1;
    char *ptr2 = str1 + len - 1;

// Copy characters from str1 to str2 in reverse order
    for (i = 0; i < len; i++) {
        str2[i] = *ptr2;
        ptr2--;
    }
// Null-terminate the reversed string
    str2[len] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    reverseString(str1, str2);

    printf("Reversed string: %s\n", str2);

    return 0;
}
