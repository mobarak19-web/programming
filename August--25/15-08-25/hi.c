#include<stdio.h>
int main(){
    char str1[100],str2[100];
    printf(" Enter your letter : ");
    gets(str1);
    strcpy(str2,str1);
    printf(" souree string : %s\n", str1);
    printf(" target string :%s\n",str2);
    return 0;

}