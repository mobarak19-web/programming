#include<stdio.h>
int main(){
    char upper;
    printf(" Enter the uppercase letter: ");
    scanf("%c",&upper);
    printf("Enter lowercase letter : %c", upper+32);
    return 0;
}