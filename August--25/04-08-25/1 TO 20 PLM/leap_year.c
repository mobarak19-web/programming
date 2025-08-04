/*8. Leap Year Checker
Description: Check if a given year is a leap year.

Condition: Year divisible by 4 and (not divisible by 100 unless divisible by 400)

Input: 2020

Output: Leap Year
*/
#include<stdio.h>
int main(){
    int year;
    while(1){
    printf("input :");
    scanf("%d",&year);
    if(year%400==0){
        printf("Leap Year\n");
    }else if(year%4==0 && year%100!=0){
        printf(" leap year\n");
    }else{
        printf(" Not leap Year\n");
    }
}
    return 0;
}