//program to sort the given n numbers of strings in ascending order using pointers
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void sortStrings(char **str, int n) {
    char *temp;
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
            // Swap strings using pointers
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
int main() {
    char *str[100];
    int n, i;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        str[i] = (char *)malloc(100*sizeof(char));
        scanf("%s", str[i]);
    }

    sortStrings(str, n);

    printf("\nSorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    // Free the dynamically allocated memory
    for (i = 0; i < n; i++) {
        free(str[i]);
    }

    return 0;
}
