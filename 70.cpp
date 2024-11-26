//program to read an array and print the occurence of any particular element in the array
#include <stdio.h>

int main() {
    int arr[100], n, i, key, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    if (count == 0) {
        printf("Element not found in the array.\n");
    } else {
        printf("The element %d occurs %d times in the array.\n", key, count);
    }

    return 0;
}
