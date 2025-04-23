#include<stdio.h>
int main(){
    char lower;
    printf(" Enter the lowercase letter: ");
    scanf("%c",&lower);
    printf("Enter uppercase letter : %c", lower-32);
    return 0;
}