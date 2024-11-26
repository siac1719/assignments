//program in C to find the pivot element of a sorted and rotated array using binary search
#include <stdio.h>

int findPivot(int arr[], int low, int high) {
    if (high < low)
        return -1;
    if (high == low)
        return low;

    int mid = (low + high) / 2;

    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;

    if (mid > low && arr[mid] < arr[mid - 1])
        return mid - 1;

    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
    return findPivot(arr, mid + 1, high);
}

int main() {
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivot = findPivot(arr, 0, n - 1);

    if (pivot == -1) {
        printf("No pivot element found.\n");
    } else {
        printf("Pivot element is: %d\n", arr[pivot]);
    }

    return 0;
}
