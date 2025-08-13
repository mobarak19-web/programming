
#include<stdio.h>
int main (){
    int i,j,arr[100],count;
    int num,dup[100];
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&num);
    printf("Input %d elements in the array : ");
    for(i=0; i<num; i++){
        scanf(" %d",&arr[i]);
       dup[i]=-1;
    }
    for(i=0; i<num; i++){
        count++;
        for(j=i+1; j<num; j++){
            if(arr[i] == arr[j]){
                count++;
                dup[j]=0;
            }
        }
        if(dup[i]!=0){
            dup[i]=count;
        }
       
    }

     printf(" Total numbar of duplicate element in array is %d",count);
     for(i=0; i<num;i++){
        printf(" %d",arr[i]);
     }
    return 0;
}