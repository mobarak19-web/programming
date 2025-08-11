/*
Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/
#include<stdio.h>
int main(){
    int arr[100];
    int i,num;
    int sum=0;

     printf("Elements to store in the array :");
       scanf("%d", &num );
    printf("Input %d number of elements in the array :\n", num);
    for(i=0; i<num; i++){
        printf("element - %d : ", i);
        scanf(" %d",&arr[i]);
    }
    printf(" \n Elements in  sum of array  : ");
    for(i=0; i<num; i++){
        //printf(" %d",arr[i]);
        sum=sum+arr[i];
    }
    printf(" Sum of array : %d", sum);
    printf("\n");
    return 0;
}
