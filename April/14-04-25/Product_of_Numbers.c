#include<stdio.h>
int main(){
    int numbar=1;
    int product=1;
    while(numbar<=5){
        product*= numbar;
       printf("current numbar :%d,current product :%d\n",numbar ,product);
       numbar++;
    }
  
    return 0;
}