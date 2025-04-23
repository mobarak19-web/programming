/*
19. Harmonic Series and Their Sum

Write a program in C to display the n terms of a harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334

*/

#include<stdio.h>
int main(){
    float n,i;
    double sum=0;
    printf("Enter the item numbar : ");
    scanf("%f ",&n);
    for( i=1; i<=n; i++){
        sum=(sum +1.0/i) ;

    }
 printf("sum of series upto %.2f terms =%.2lf \n", n,sum);
    return 0;
}