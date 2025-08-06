#include<stdio.h>
int main(){
    int num[100],n;
    printf("How many numbewrs :");
scanf(" %d",&n);
printf("Enter the number :\n");
int i;
for(i=0; i<n; i++){
    scanf("%d",&num[i]);
}
int min=num[0];
for(i=0; i<n; i++){
    if(min > num[i]){
        min=num[i];
    }
   
}
 printf("Minimum =%d\n",min);
return 0;
}