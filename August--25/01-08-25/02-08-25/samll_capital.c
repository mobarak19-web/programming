#include<stdio.h>
int main(){
char ch;
printf(" Enter the letter :");
scanf(" %c",&ch);
if(ch>='A' && ch<='Z' ){
    printf(" this Letter Capital\n ");
}
else if ( ch>='a' && ch<= 'z'){
     printf(" this Letter Small\n ");
}else{
    printf(" emty\n");
}
return 0;
}