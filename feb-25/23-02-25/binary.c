#include<stdio.h>
int main(){
    int arr[10]={2,4,6,8,10,15,20,25,30,35};
    int st,end,mid,item;
st=0;
 end=9;
 item=20;
 while (st<=end){
    mid=(st+end)/2;
    if(arr[mid]==item){
        printf("Item found at index:%d\n",mid);
        return 0;
    }else if(arr[mid]<item){
        st=mid+1;
    }else{
        end=mid-1;
    }
 }
 printf("Item not found \n");
    return 0;
}