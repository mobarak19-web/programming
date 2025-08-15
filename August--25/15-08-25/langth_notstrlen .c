#include<stdio.h>
int main(){
    char str[]={"mobarak husini"};
   // int len =strlen(str);
   int i=0,len =0;
   while(str[i] != '\0'){
    i++;
    len++;
   }
    printf("Length = %d\n", len);
    return 0;
}