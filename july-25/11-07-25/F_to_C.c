#include<stdio.h>
int main (){
    float c, f;
    printf("Enter the value f : ");
    scanf("%f", &f);
   c= (f - 32) * 5/9;
    printf("The value of Fahrenheit is: %.2f\n", c);
    return 0;
}