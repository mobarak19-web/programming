#include<stdio.h>
int main(){
    int i=0;
    printf("print numbar from 0 to 10 :\n");
    while (i<=10)
{
    printf("%d\n",i);
    i++;
}
//second while loop :print numbers from 10 to 0
i=10;
printf("print numbar from 10 to 0:\n");
while (i>=0){
    printf("%d\n",i);
    i--;
}
return 0;
}