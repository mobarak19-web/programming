#include<stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Enter a number to find its rounded value: ");
    scanf("%d", &x);
    int result = round(x);
    printf("The rounded value of %d is = %d\n", x, result);
    return 0;

}