#include<stdio.h>
#include<math.h>
int main() {
    int x,y;
    printf("Enter the base and exponent: ");
    scanf("%d %d", &x, &y);
    double result=pow(x, y);
    printf("The power of 2 raised to 3 is: %.2lf\n", result);
    return 0;
}
