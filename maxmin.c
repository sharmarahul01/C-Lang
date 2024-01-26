#include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min) {
    // Initialize max and min with the first element
    *max = *min = arr[0];

    // Traverse the array to find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        } else if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max, min;

    findMaxMin(arr, n, &max, &min);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}

