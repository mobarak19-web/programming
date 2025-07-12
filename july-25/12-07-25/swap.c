#include<stdio.h>
int main(){
    int a,b, temp;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");\
    scanf("%d", &b);
    temp= a;
    a= b;
    b= temp;
    printf("After swapping, the value of A is: %d\n", a);
    printf("After swapping, the value of B is: %d\n", b);
    return 0;

}