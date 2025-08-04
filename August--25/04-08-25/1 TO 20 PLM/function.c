/*
19. Sum using Function
Description: Write a function sum(a,b) that returns sum.

Input: 10 20
*/
#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = sum(num1, num2);
    printf("%d\n", result);
    return 0;
}