#include<stdio.h>
int main(){
    int i,n,p=0;
    printf("Enter a numbar:");
    scanf("%d",&n);
    for(i=2; i<n; i++){
        if(n%i==0){
            p=1;
        }
    }
    if(p==0){
        printf("%d is a prime numbar.\n",n);
    }else{
        printf("%d is a not prime numbar.\n",n);
    }
    return 0;
}