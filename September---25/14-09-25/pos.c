#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
     int numbar[100];
    int even=0,odd=0,positive=0,negative=0;
    for(i=0;i<n;i++){
        scanf("%d",&numbar[i]);
    
        
        if(numbar[i]%2==0){
            even++;
        }else{
            odd++;
        }
  if(numbar[i]>0){
      positive++;
  }else if(numbar[i]<0){
      negative++;
  }
    }
    printf("Even:%d\n",even);
    printf("Odd:%d\n",odd);
    printf("Positive:%d\n",positive);
    printf("Negative:%d\n",negative);
    
}