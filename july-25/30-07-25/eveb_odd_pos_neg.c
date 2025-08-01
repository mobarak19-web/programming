#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for(int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    // Check if the number is even or odd
    if(n % 2 == 0) {
        printf("even=%d\n", n);
    } else {
        printf("odd=%d\n", n);
    }

    // Check if the number is positive or negative
    if(n > 0) {
        printf("positive=%d\n", n);
    } else if(n < 0) {
        printf("negative=%d\n", n);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}