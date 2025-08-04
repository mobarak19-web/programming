/*12. Factorial of a Number
Description: Find factorial of N.
Input: 5
Output: 120
Test Cases:
*/
#include<stdio.h>
int main(){
    while(1){
    int num,i,fact=1;
   
     
   
  printf("Enter the  numbar :");
  scanf("%d",&num);
    for(i=1; i<=num; i++){
      fact=fact*i;
   
    }
    printf("factrial=%d\n",fact);
   }
    return 0;
}