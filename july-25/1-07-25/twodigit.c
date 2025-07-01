#include<stdio.h>
int main(){
    int num1,num2,result;
    printf("Enter the two numbar:");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    printf("sum=%d\n",result);
     result=num1-num2;
    printf("sub=%d\n",result);

      result=num1*num2;
    printf("multy=%d\n",result);
      result=num1/num2;
    printf("div=%d\n",result);
      result=num1%num2;
    printf("remainder=%d\n",result);
    return 0;
}
