#include <stdio.h>

// Function to perform binary search
int binarySearch(int array[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at the middle
        if (array[mid] == target) {
            return mid;
        }

        // If the target is greater, ignore the left half
        if (array[mid] < target) {
            left = mid + 1;
        }

        // If the target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // If the target is not present in the array
    return -1;
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Input sorted array elements
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int target;

    // Input the target element to search
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    // Perform binary search
    int index = binarySearch(array, 0, size - 1, target);

    // Display the result
    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
