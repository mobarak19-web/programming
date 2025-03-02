#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
    int a[100],even=0,n;
    printf("Array size:");
    scanf("%d",&n);
    srand(time(NULL));
    for(int i=0;i<n; i++){
        a[i]=rand%100;
        printf("%d",a[i]);

    }
    printf("\n");
    for(int i=0;i<n; i++){
        if(a[i]%2==0){
            even=even+1;

        }
    }
    printf("Even  numbar are:%d",even);
return 0;
}