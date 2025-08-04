/*13. Print Elements of an Array
Description: Take N integers in an array and print them.
Input:
Copy code
*/
#include<stdio.h>
int main(){
    int arr[100],n;
    printf(" Enter the array :");
    scanf(" %d",&n);
    for(int i=1; i<=n; i++){
        printf(" %d",i);
    }
}