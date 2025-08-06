#include<stdio.h>
int main(){
    int num[100],n,i;
     printf("How many numbewrs :");
scanf(" %d",&n);
num[0]=0;
num[1]=1;

for(i=2; i<n; i++){
   num[i]=num[i-1] + num[i-2];
}
printf("\n");
for(i=0; i<n; i++){
    printf(" %d",num[i]);
}
return 0;
}