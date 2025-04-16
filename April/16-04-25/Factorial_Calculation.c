_/*
15. Factorial Calculation

Write a C program to calculate the factorial of a given number.
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
*/

#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("enter a numbar:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
       fact=fact*i;
        }
        printf("final factorial is:%d\n", fact);
    
    return 0;
}