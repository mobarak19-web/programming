#include<stdio.h>
/*
8. Odd Natural Numbers and Their Sum

Write a C program to display the n terms of odd natural numbers and their sum.
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
*/
int main(){
    int count,start,end,sum=1;
    printf("Enter start and end value:\n");
    scanf("%d %d",&start,&end);
    printf("odd numbar from %d to %d are:\n",start,end);
    for(count=start;count<=end;count++){
        if(count%2 !=0){
            printf("%d\n ",count);
            sum=sum * count;
        }
    }
     printf("sum of all  odd numbar  are:%d\n",sum);
  
    return 0;
}