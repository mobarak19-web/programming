
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int n,i, temp;
    srand(time(NULL));
    /*
     printf(" Enter the array :");
    scanf("%d",&n);
    */
   

    n=rand()% 10+5;

    printf("Original array: \n");
    for(i=0; i<n; i++){
        arr[i]=rand()% 100;
        printf("%d ",arr[i]);

    }
    printf(" \n ");
    //bubble sorted
     for(i=0;i<n-1; i++){
        for( int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                //swap
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;


            }
        }
     }
     //print sorted  array
     printf(" sorted array: \n");
     for(i=0; i<n; i++){
        printf("%d ",arr[i]);
     }
     printf(" \n ");

return 0;
}