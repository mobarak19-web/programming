/*1. Print Numbers Using Do-While Loop
Write a C program to print numbers from 1 to 10 and 10 to 1 using a do-while loop.
*/
#include<stdio.h>
int main(){
     int number,i;
     printf("Enter the numbar :");
     scanf("%d",&number);
     i=1;
     do{
        printf(" %d\n",i);
        i++;
     }while(i<=number);
     printf("\n");\
     i=number;
     do{
         printf(" %d\n",i);
        i--;
     }while(i>=1);
printf("\n");
    return 0;
}