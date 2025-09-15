#include<stdio.h>
int main (){
  
    int T,n;
    scanf("%d",&T);
    for(int i=1; i<=T; i++){
         long long fact=1;
        scanf("%d",&n);
        for( int j=2; j<=n; j++){
            fact=fact*j;
        }
         printf("%lld\n",fact);
    }
   
    return 0;
}