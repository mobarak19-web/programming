#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

// Function to generate a sorted array with random values
void generateSortedArray(int arr[], int *n) {
    int i;
    *n = rand() % 10 + 5;  // Random size between 5 and 14
    arr[0] = rand() % 10;

    for (i = 1; i < *n; i++) {
        arr[i] = arr[i - 1] + rand() % 10 + 1;  // Ensure ascending order
    }
}

// Linear search to find insertion position
int findInsertPosition(int arr[], int n, int value) {
    int i = 0;
    while (i < n && arr[i] < value) {
        i++;
    }
    return i;
}

// Insert value into sorted array
void insertIntoSortedArray(int arr[], int *n, int value) {
    int pos = findInsertPosition(arr, *n, value);

    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    (*n)++;
}

// Print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int n;
    int value;

    srand(time(NULL)); // Seed for randomness

    generateSortedArray(arr, &n);

    printf("Original sorted array:\n");
    printArray(arr, n);

    value = rand() % 100;  // Random value to insert
    printf("Random value to insert: %d\n", value);

    insertIntoSortedArray(arr, &n, value);

    printf("Array after insertion:\n");
    printArray(arr, n);

    return 0;
}
