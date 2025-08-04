#include<stdio.h>
int main (){
    char ch;
    printf(" Enter the letter :");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='A' || ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='v'||ch=='V'){
        printf(" Vowel\n ");
    }else{
        printf("Consonent\n");
    }
    return 0;
}