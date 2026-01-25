#include<stdio.h>
int binarysearch(int a[], int n, int target){
    int low=0, high=n-1, mid;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==target){
            return mid;
        
        }else if(a[mid]<target){
            low = mid + 1;

        }
        else{
            high = mid -1;
        
        }

    }
    return -1;
}
int main(){
    int n, target;
    printf(" Enter ythe size array :");
    scanf(" %d",&n);
    int a[n];
    printf("Enter the ellment of array :");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
     printf("Enter the numbar to search :");
      scanf("%d", &target);
       int result =  binarysearch(a,n,target);
       
    if (result == -1) {
        printf("The number %d is not found\n", target);
    } else {
        printf("The number %d is found at index %d\n", target, result);
    }
    
    return 0;
}