#include<stdio.h>
int main(){
    int num[100],n,value,i;
    int pos=-1;
     printf("How many numbewrs :");
scanf(" %d",&n);
printf("Enter the number :\n");

for(i=0; i<n; i++){
    scanf("%d",&num[i]);
}
printf("Enter the search value :");
scanf("%d",&value);
for(i=0; i<n; i++){
    if(value==num[i]){
        pos=i+1;
        break;
    }
}
if(pos==-1){
    printf("Item is Not found");
}else{
    printf(" the postion of = %d",pos);
}
return 0;
}