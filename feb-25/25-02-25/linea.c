#include<stdio.h>
int main(){
    int arr[10];
   int n,i,iteam;
   printf("Enter the size:");
   scanf("%d",&n);
    printf("Enter the elemant:\n");
   for(i=0; i<n; i++){
    scanf("%d",&arr[i]);

   }
   scanf("%d",&iteam);

    for(i=0; i<n; i++){
        if(arr[i]==iteam){
            printf("data is found:%d",iteam);
           ;
            break;
        }
    }
    if(i==n){
        printf("data not found");
    }
    return 0;
}