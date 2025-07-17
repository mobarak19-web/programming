#include<stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Enter a number to find its unary plus: ");
    scanf("%d", &x);
    int result = +x;
    printf("The unary plus of %d is = %d\n", x, result);
    return 0;
}
