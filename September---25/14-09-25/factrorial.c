#include<stdio.h>
int factorial(){
    int n, fact=1,c;
    for(;;)
    {
        printf("Enter number: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        printf("Factorial is: %d",fact);
    printf("\nPress any key to Continue or press 1 to end: ");
    scanf("%d",&c);
    if(c!=1){
        return factorial();
    }
    else{
        printf("Finsh.");
        break;
    }
    }
}
int main(){ 
    int result;
    result = factorial();
}
