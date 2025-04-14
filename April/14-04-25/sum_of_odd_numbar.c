#include<stdio.h>
int main(){
    int count,start,end,sum=0;
    printf("Enter start and end value:\n");
    scanf("%d %d",&start,&end);
    printf("odd numbar from %d to %d are:\n",start,end);
    for(count=start;count<=end;count++){
        if(count%2 !=0){
            printf("%d\n ",count);
            sum=sum + count;
        }
    }
     printf("sum of all  odd numbar  are:%d\n",sum);
  
    return 0;
}