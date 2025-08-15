#include<stdio.h>
int main(){
int  a,b,c,s;
float are;

printf("Enter  thr three  numbar: ");
scanf("%d%d%d",&a,&b,&c);

s=(a+b+c)/2;
are=sqrt (s*(s-a)*(s-b)*(s-c));
//printf("the sum is =%d\n",s);
printf("the area is =%.2f\n",are);
return 0;
}