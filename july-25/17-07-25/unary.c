#include<stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Enter a number to find its unary minus: ");
    scanf("%d", &x);
    int result = -x;
    printf("The unary minus of %d is = %d\n", x, result);
}

