#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Linear search function
int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;  // Found, return index
        }
    }
    return -1; // Not found
}

int main() {
    int arr[100], n, i, target, result;

    // Seed random number generator
    srand(time(NULL));

    // Get array size from user
    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    // Generate random elements for the array
    printf("Randomly generated array:\n");
    for(i = 0; i < n; i++) {
        arr[i] = rand() % 100; // values from 0 to 99
        printf("%d ", arr[i]);
    }

    // Generate a random target to search
    target = rand() % 100;
    printf("\n\nRandom target to search: %d\n", target);

    // Perform linear search
    result = linearSearch(arr, n, target);

    // Show result
    if(result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}
