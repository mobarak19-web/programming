#include<stdio.h>
int main (){
    float c, f;
    printf("Enter the value c : ");
    scanf("%f", &c);
   f= (c * 9/5) + 32;
    printf("The value of F is: %.2f\n", f);
    return 0;
}