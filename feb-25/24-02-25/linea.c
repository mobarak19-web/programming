#include<stdio.h>
int main(){
    int arr[10];//={10,6,12,23,34,7,9,15,17,20};
   int n,i,iteam;
   printf("Enter the size:");
   scanf("%d",&n);
    printf("Enter the elemant:\n");
   for(i=0; i<n; i++){
    scanf("%d",&arr[i]);

   }
   scanf("%d",&iteam);

  //  int found=0;
    for(i=0; i<n; i++){
        if(arr[i]==iteam){
            printf("data is found:%d",iteam);
            //found ++;
            break;
        }
    }
    if(i==n){
        printf("data not found");
    }
    return 0;
}