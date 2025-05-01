#include<stdio.h>
int main(){
    int num1,num2,sum=0,avg;
    printf("Enter the two digit: ");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf(" the sum is  :%d\n",sum);
    avg=sum/2;
    printf("the avg is :%d",avg);
    return 0;
}