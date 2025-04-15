#include<stdio.h>
/*
10. Right Angle Triangle Pattern with Numbers

Write a C program to display a pattern like a right angle triangle with a number.

The pattern like :

1
12
123
1234
*/
int main(){
    int numbar, row,column;
    printf("Enter the numbar :");
    scanf("%d",&numbar);
    for(row=1;row<=numbar;row++){
        
          for(column=1;column<=row;column++){

            printf(" %d ",column);

          }
    
           printf("\n");

    }
    return 0;
}