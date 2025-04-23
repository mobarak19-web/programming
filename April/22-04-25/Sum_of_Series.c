/*
21. Sum of Series [9 + 99 + 999 + …]

Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
Test Data :
Input the number or terms :5
Expected Output :
9 99 999 9999 99999
The sum of the saries = 111105
*/
#include<stdio.h>
int main(){
    int n,i,temp=0;
    int sum=0;
    printf("Enter the item numbar : ");
    scanf("%d",&n);
    for( i=1; i<=n; i++){
        temp=temp*10+9;
        printf("%d, ", temp);
        sum=sum + temp ;

    }
 printf("\n sum of series :%d \n",sum);
    return 0;
}