#include<stdio.h>
int main(){
    int i,n;
    int numbar[n];
    printf("Enter the value:");
    scanf("%d",&n);
    int even=0,odd=0,positive=0,negative=0;
    for(i=0;i<=n;i++){
        scanf("%d\n",&numbar[n]);
        //even or odd
        
        if(numbar[i]%2==0){
            even++;
        }else{
            odd++;
        }
  //count  positve or negetive
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