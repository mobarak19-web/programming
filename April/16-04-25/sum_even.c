/*
16. Sum of Even Natural Numbers

Write a C program to display the sum of n terms of even natural numbers.
Test Data :
Input number of terms : 5
Expected Output :
The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30
*/
#include<stdio.h>
int main(){
    int i,a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    
    
    printf("All positive numbar are: ");
    for(i=a; i<=b; i++){
        
        if(i%2==0){
            printf("%d, ",i);
                
        }
       
    }
    
    return 0;
}