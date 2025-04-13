#include <stdio.h>

int main() {
    float a ,b , sum = 0, count = 0;
    
    float average;
    printf("enter the value:");
scanf("%f",&a);
printf("enter the value:");
scanf("%f",&b);


    for (int i = a; i <= b; i++) {
        sum =sum + i;
        count++;
    }

    average = sum / count;

    printf("Sum of numbers from %f to %f is: %.2f\n", a, b, sum);
    printf("Average is: %.2f\n", average);

    return 0;
}