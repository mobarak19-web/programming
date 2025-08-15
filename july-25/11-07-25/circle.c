#include<stdio.h>
int main (){
    float r, area;
    printf("Enter the value R : ");
    scanf("%f", &r);
    area= (3.1416*r * r);
    printf("The area of the Circle is: %.2f\n", area);
    return 0;
}