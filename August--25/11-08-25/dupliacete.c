/*Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/
#include<stdio.h>
int main (){
    int i,j,arr[100],count;
    int num;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&num);
    printf("Input %d elements in the array : ");
    for(i=0; i<num; i++){
        scanf(" %d",&arr[i]);

    }
    for(i=0; i<num; i++){
        for(j=i+1; j<num; j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
       
    }
     printf(" Total numbar of duplicate element in array is %d",count);
    return 0;
}