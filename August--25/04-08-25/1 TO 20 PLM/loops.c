/*9. Print 1 to N
Description: Print numbers from 1 to N using a loop.

Input: 5
Output: 1 2 3 4 5
Test Cases:
*/
#include<stdio.h>
int main(){
    int n;
    printf("input :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf(" %d\n",i);
    }
    return 0;
}