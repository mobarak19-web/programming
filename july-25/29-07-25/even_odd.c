#include<stdio.h>
int main(){
    int num;
    printf("Enter the numbar :");
    scanf("%d",&num);
    if(num%2==0){
        printf("Even\n");
    }
    else if(num%2 !=0){
        printf("odd\n");

    }else{
        printf(" this numbar its not odd or even\n");
    }
    return 0;
}