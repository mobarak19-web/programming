#include<stdio.h>
int main(){
int  num1,num2,sum;
float avg;

printf("Enter  thr two numbar: ");
scanf("%d%d",&num1,&num2);
sum=num1 +num2 ;
avg=sum/2;
printf("the sum is =%d\n",sum);
printf("the avg is =%.2f\n",avg);
return 0;
}