#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("How many numbars :");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0; i<n; i++){
        scanf(" %d", &arr[i]);
    }
  
   printf("print the numbar= \n ");
   for(i=0; i<n; i++){
       printf(" %d\n",arr[i]);
   }
  // printf("\n");
   return 0;
}