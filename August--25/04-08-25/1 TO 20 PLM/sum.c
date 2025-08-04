/*3. Add Two Integers
Description: Take two integers and print their sum.

Input: Two integers

Output: Sum of two integers
*/
#include<stdio.h>
int main(){
    int num1,num2,sum;
    printf("Enter the 1st numbar :");
    scanf("%d",&num1);

 printf("Enter the 2nd numbar :");
    scanf("%d",&num2);
    sum=num1+ num2;
    printf("sum of two integers :%d\n",sum);
return 0;
}