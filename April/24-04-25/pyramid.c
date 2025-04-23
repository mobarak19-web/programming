/*
Given a number N. Print a left angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
InputCopy
4
OutputCopy
*
**
***
****
*/
#include<stdio.h>
int main(){
    int N;
   // printf(" Enter the numbar :\n");
    scanf("%d",&N);
    for(int row=1; row<=N; row++){
        for(int colun=1; colun<=row; colun++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}