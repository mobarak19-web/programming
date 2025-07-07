#include<stdio.h>
int sum (int x,int y);
int main(){
int a,b,result;
printf("Enter the two value a and b:");
scanf("%d%d",&a,&b);
result =sum(a,b);
printf("The sum is : %d\n",result);
printf("a=%d, b=%d ",a,b);
return 0;

}
int sum (int s,int t){
  s=s+2;
  t=t+2;
  return s+t;
}