#include<stdio.h>
int main(){
    int i, n,target,flag=0,index=-1;
printf("Enter the size array :");
scanf("%d", &n);
int a[n];
printf("Enter the elements og array : ");
for(i=0; i<n; i++){
    scanf("%d",&a[i]);
}
printf(" Enter the numbar to search : ");
scanf("%d", &target);
for(i=0; i<n; i++){
    if(a[i]==target){
        flag=1;
        index=i;
        break;


    }
}


if(flag==1){
    printf(" The numbar %d is found at index %d",target,index);

}
else{
   printf("The numbar %d is not found ", target); 
}

return 0;
}