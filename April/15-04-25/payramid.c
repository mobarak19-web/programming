#include<stdio.h>

int main(){
    int numbar;
    printf("Enter the numbar:");
    scanf("%d",&numbar);
   for(int i=1; i<=numbar; i++){
       for(int j=numbar; j>i; j--){
           printf(" ");
       }
       for(int k=1; k<=i; k++ ){
           printf(" %d ",k);
       }
       printf("\n");
   }
return 0;
}