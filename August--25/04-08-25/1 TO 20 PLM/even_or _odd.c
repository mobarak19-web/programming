/*5. Even or Odd
Description: Check if a number is even or odd.
Input: 7
Output: Odd
Test Cases:
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a numbar :");
    scanf("%d",&num);
    if(num%2==0){
        printf("Even\n");
    }else{
        printf(" Odd\n");
    }
    return 0;
}