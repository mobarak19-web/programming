#include <stdio.h>

int main() {
    int arr[] = {5, 3, 7, 2, 8, 9, 4};  
    int target = 8;  
    int size = sizeof(arr) / sizeof(arr[0]); 
    int found = -1;  

    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = i;  
            break;  
        }
    }

    
    if (found != -1) {
        printf("Element %d found at index %d.\n", target, found);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
