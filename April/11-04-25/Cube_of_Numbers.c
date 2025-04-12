#include<stdio.h>
int main(){
    int i,cube;
    for(i=1;i<=5;i++){
        cube=i*i*i;
        printf("Cube of %d is %d\n", i, cube);
    }
   

    return 0;
}