#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
   a = a - b; 
    b = a + b;
    a = b - a;
    printf("After swapping, the value of A is: %d\n", a);
    printf("After swapping, the value of B is: %d\n", b);
    return 0;

}