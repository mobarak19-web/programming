/*1. Array Store & Print
Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/
#include<stdio.h>
int main(){
    int arr[100],num;
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    printf("How many numbers :");
    scanf("%d",&num);
    /*  printf("Enter the  number :\n");
     for(int i=0; i<num; i++){
        scanf("%d",arr[i]);
     }*/
     for(int i=2; i<num; i++){
      arr[i]=arr[i-1] + arr[i-2];
      
     }
     for(int i=0;i<num; i++){
      printf(" %d",arr[i]);
     }
     return 0;
}