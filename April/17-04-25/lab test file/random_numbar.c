#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int numbar,size;
    printf("Enter the random size: ");
    scanf("%d",&size);
    srand(time(NULL));
    for(int i=0; i<=size; i++){
        numbar=rand()% 1000;
        printf(" Random value  %d : %d\n",i+1,numbar);

    }
    return 0;

}