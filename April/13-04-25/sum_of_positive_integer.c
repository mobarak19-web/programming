
#include<stdio.h>
int main(){
    int i,n,m,sum=0;
    printf("Enter the fist digit:");
    scanf("%d",&n);
    printf("Enter the second digit:");
    scanf("%d",&m);
    i=n;
    while(i<=m)
    {
        if(i>0){
            printf("%d\n",i);
        }
       
        sum=sum+i;
        i++;
    }
    printf("sum of value:%d\n",sum);
    return 0;
}
