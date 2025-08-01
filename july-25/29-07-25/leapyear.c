#include<stdio.h>
int main(){
    //int even,odd,positive,nagetive;
    int n;
    printf(" Enter the numbar ");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
       printf("%d\n",n);
    }
     if(n%2==0){
           printf("even=%d\n");
        }
        else if(n%2 !=0){
            printf(" odd=%d\n");
        }else if(n>0){
            printf("positive=%d\n");
        }else if(n<0){
            printf("nagetive=%d\n");
        }
    return 0;
}