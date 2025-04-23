
/*
17. Pyramid Pattern with Repeated Numbers

Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

   1
  2 2
 3 3 3
4 4 4 4
*/

#include<stdio.h>
int main(){
    int n;
    printf(" Enter the numbar :");
    scanf("%d",&n);
    for(int i=1;i<=n; i++){
        for(int j=n; j>i; j--){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}