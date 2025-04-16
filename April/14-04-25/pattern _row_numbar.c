#include<stdio.h>
/*
11. Right Angle Triangle with Repeated Number per Row

Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.

The pattern like :

 1
 22
 333
 4444
 */
int main(){
    int numbar, row,column;
    printf("Enter the numbar :");
    scanf("%d",&numbar);
    for(row=1; row<=numbar; row++){
        
          for(column=1; column<=row; column++){

            printf("%d",column);

          }
    
           printf("\n");

    }
    return 0;
}