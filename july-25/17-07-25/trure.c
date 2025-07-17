#include<stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Enter a number to find its trunc value: ");
    scanf("%d", &x);
    int result =trunc(x);
    printf("The trunc value of %d is = %d\n", x, result);
    return 0;

}