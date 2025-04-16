/*
6
factorial Calculation Using a While Loop

Write a C program that prompts the user to enter a positive integer. It then calculates and prints the factorial of that number using a while loop.

Click me to see the solution
*/
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("enter a numbar:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
       fact=fact*i;
        i++;
        }
       
        printf("final factorial is:%d\n", fact);
    
    return 0;
}
