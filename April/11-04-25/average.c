#include<stdio.h>
int main(){
    float i,sum=0,average;
    printf(" Sum and Average of 10 Numbers from Keyboard:\n");
    for(i=1;i<=10;i++){
        sum=sum+i;
       average=sum/10;
       printf("%0.3f\n",i);

    }
    printf("The sum of 10 no is :%.3f\n",sum);
    printf("The Average is :%.3f\n",average);
}