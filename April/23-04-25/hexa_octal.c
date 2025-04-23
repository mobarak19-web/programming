/*
conversion
1. decimal to octal
   %d ba %i  <--> %o
  2 .hexa to decimal
   %x <-->%d ba %i
3. heax to octal
%x <--> %o


*/
#include<stdio.h>
int main(){
    int num;
    printf(" Enter the octal numbar : ");
    scanf("%o",&num);

    printf(" Enter the hexa_decimal numbar :%x",num);
    return 0;
}