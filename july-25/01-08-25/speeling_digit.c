#include<stdio.h>
int main(){
    int digit;
    printf("Enter the digit : ");
    scanf("%d",&digit);
    switch(digit){
        case 0:
        printf("Zero\n");
        break;
      case 1:
      printf(" one\n ");
      break;
      case 2:
      printf(" two\n ");
      break;
      case 3:
      printf(" three\n ");
      break;
    //  default 
      //printf(" not exit\n");
      
    }
    return 0;
}