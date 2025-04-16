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
    int fact,n;
    printf("Enter the numbar: ");
    scanf("%d ", &n);
    for(int i=1; i<=n; i++){
        fact=fact * i;
    }
    printf(" factorial is : %d",fact);
return 0;
}
