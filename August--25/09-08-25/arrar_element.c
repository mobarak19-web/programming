#include<stdio.h>
int main(){
    int arr[100];
    int i,num;

     printf("Elements to store in the array :");
       scanf("%d", &num );
    printf("Input %d number of elements in the array :\n", num);
    for(i=0; i<num; i++){
        printf("element - %d : ", i);
        scanf(" %d",&arr[i]);
    }
    printf(" \n Elements in array are : ");
    for(i=0; i<num; i++){
        printf(" %d",arr[i]);
    }
    printf("\n");
    return 0;
}