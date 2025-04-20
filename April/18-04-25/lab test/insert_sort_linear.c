
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int n,i,insertvalue ,pos;
    n=rand()% 6+5;
    arr[0] = rand() % 10;
     // Generate sorted random array
    for(i=0; i<n; i++){
        arr[i] = arr[i - 1] + rand() % 10 + 1;
    }
    
    printf("Original array: \n ");
    
    for(i=0; i<n; i++){
        
       printf("%d ",arr[i]);
    }
    printf(" \n");
    //generate random value to insert
    insertvalue=rand()% 100;
    printf(" Random value to insewrt : %d\n", insertvalue);
    pos=0;
    while(pos<n && arr[pos]<insertvalue){
        pos++;

    }
    //shift element to the right
    for(i=n; i>pos; i--){
        arr[i]=arr[i+1];

    }
    arr[pos]=insertvalue;
    n++;
    printf("Array after insertion : \n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);

    }
    printf(" \n ");
    return 0;


}

