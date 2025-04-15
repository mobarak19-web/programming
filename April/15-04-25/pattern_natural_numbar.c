/*
12. Right Angle Triangle with Sequentially Increasing Numbers

Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10
*/
#include<stdio.h>
int main(){
    int numbar,inrement_value=1;
    printf("Enter the numbar:");
    scanf("%d",&numbar);
    for(int row=1; row<=numbar; row++ ){
        for(int column=1; column<=row; column++){
            printf("%d ",inrement_value++);
           
        }
        printf("\n");
    }

return 0;
}