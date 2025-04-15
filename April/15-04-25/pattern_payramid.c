/*
14. Pyramid Pattern with Asterisks

Write a C program to make such a pattern as a pyramid with an asterisk.

   * 
  * * 
 * * * 
* * * *
*/
#include<stdio.h>
int main(){
    int numbar;
    printf("Enter the numbar:");
    scanf("%d",&numbar);
   for(int i=1; i<=numbar; i++){
       for(int j=numbar; j>i; j--){
           printf(" ");
       }
       for(int k=1; k<=i; k++ ){
           printf(" * ");
       }
       printf("\n");
   }
return 0;
}