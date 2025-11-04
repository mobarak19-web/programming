#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=2; i<=n; i=i+2){
        if(n%2==1){
            printf("%d\n",i);
       }
    }
    return 0;
}