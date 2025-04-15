#include<stdio.h>
/*
13. Pyramid Pattern with Increasing Numbers

Write a program in C to make a pyramid pattern with numbers increased by 1.

   1 
  2 3 
 4 5 6 
7 8 9 10 
*/

int main(){
    int numbar,inrement_value=1;
    printf("Enter the numbar:");
    scanf("%d",&numbar);
   for(int i=1; i<=numbar; i++){
       for(int j=numbar; j>i; j--){
           printf(" ");
       }
       for(int k=1; k<=i; k++ ){
           printf(" %d ",inrement_value++);
       }
       printf("\n");
   }
return 0;
}