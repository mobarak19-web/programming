/*
9. Palindrome Number Check Using a While Loop

Write a C program that implements a program to check if a given number is a palindrome using a while loop.
*/
#include<stdio.h>
int main(){
    int numbar,temp,sum=0, revers;
    printf("Enter the numbar : ");
    scanf("%d",&numbar);
    temp=numbar;
    while(temp!=0){
        revers=temp % 10;
         sum= sum*10 + revers;
         temp=temp/10;

    }
    if(numbar==sum){
        printf(" palindrome numbar ");
    }
    else{
        printf(" not palindrome numbar ");
    }

    return 0;
}