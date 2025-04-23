#include<stdio.h>
int main(){
    float n,i,x;
    double sum=0;
    //start value fixt x
    printf("Enter the start value : ");
    scanf("%f",&x);
    printf("Enter the item numbar : ");
    scanf("%f",&n);
    for( i=1; i<=n; i++){
        sum=sum +(double)x/i;

    }
 printf("sum of series upto %.2f terms =%.2lf \n", n,sum);
    return 0;
}