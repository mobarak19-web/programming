#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
    int a[100],n,loc,key;
    printf("Array size:");
    scanf("%d",&n);

    srand(time(NULL));
    for(int i=0;i<n; i++){
        a[i]=rand() %1000;
        printf("\na[%d]=%d",a[i]);

    }
for(;;){
    printf("\n Enter your inserting location:");
    scanf("%d",&loc);
    printf("Enter new element at your location:");
    scanf("%d",&key);
    //shifting part
    for(int i=n-1; i>=loc;i--){
        a[i+1]=a[i];
    }
    a[loc]=key;
    n++;
    printf("New array is:");
    for(int i=0;i<n;i++){
printf("\na[%d]=%d",i,a[i]);
    }
    printf("\n");
int e;
    printf("Enter any numbar for exit and 1 for coutine :");
    scanf("%d",&e);
    if(e!=1){
        return 0;

    }
}

}