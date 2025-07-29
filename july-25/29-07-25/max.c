#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the two numbar :");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        printf("The number is maximum=%d\n",num1);
    } else if(num1<num2){
        printf("The number is minimum=%d\n",num2);
    } else {
        printf("The number is equal\n");
    }
return 0;
}