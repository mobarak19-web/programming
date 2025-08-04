/*7. Positive, Negative, or Zero
Description: Check whether a number is positive, negative, or zero.

Input: -5

Output: Negative
*/
#include<stdio.h>
int main(){
    while(1){
    int num;
    printf("Enter the numbar :");
    scanf("%d",&num);
    if(num>0){
        printf("The number is positive\n");
    } else if(num<0){
        printf("The number is negative\n");
    } else {
        printf("The number is zero\n");
    }
    }
return 0;
}