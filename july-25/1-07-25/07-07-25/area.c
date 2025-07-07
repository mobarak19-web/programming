#include<stdio.h>
int main(){
int  a,b,c;
float avg;

printf("Enter  thr three  numbar: ");
scanf("%d%d%d",&a,&b,&c);

avg=(a+b+c)/2;

printf("the avg is =%.2f\n",avg);
return 0;
}