#include<stdio.h>
#include<math.h>
int main(){
    double x;
    printf("Enter a number to find its natural logarithm: ");
    scanf("%lf", &x);
    double result=log(x);
    printf("The natural logarithm of %.2lf is = %.2lf\n", x, result);
   
   
    return 0;
}