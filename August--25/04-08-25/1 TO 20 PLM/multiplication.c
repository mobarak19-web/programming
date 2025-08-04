/*11. Multiplication Table
Description: Print multiplication table for a number.

Input: 3

Output:
*/

#include<stdio.h>
int main(){
    int n,i,m;
    printf("input :");
    scanf("%d",&n);
  printf("Enter the multiplication numbar :");
  scanf("%d",&m);
    for(i=1; i<=m; i++){
      
    printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}