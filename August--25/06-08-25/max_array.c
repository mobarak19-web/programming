#include<stdio.h>
int main(){
    int num[100],n,max;
    printf("How many numbewrs :");
scanf(" %d",&n);
printf("Enter the number :\n");
int i;
for(i=0; i<n; i++){
    scanf("%d",&num[i]);
}
max=num[0];
for(i=0; i<n; i++){
    if(max < num[i]){
        max=num[i];
    }
   
}
 printf("Maximum =%d\n",max);
return 0;
}