/*10. Sum of N Natural Numbers
Description: Find sum of first N natural numbers.

Input: 10

Output: 55

Formula: n(n+1)/2

Test Cases:
*/
#include<stdio.h>
int main(){
    int n,sum=0,i;
    
    printf("input :");
    scanf("%d",&n);
    for( i=1; i<=n; i++){
        printf(" %d\n",i);
       sum=sum +i;
    }
       printf("Output :%d\n", sum);

    return 0;
}