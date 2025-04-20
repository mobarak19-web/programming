#include<stdio.h>
int main(){
    int numbar,temp,sum=0, revers;
    printf("Enter the numbar : ");
    scanf("%d",&numbar);
    temp=numbar;
    while(temp!=0){
        revers=temp % 10;
         sum= sum*10 + revers;
         temp=temp/10;

    }
    printf("  the revers numbar :%d\n",sum);
    return 0;
}