//je kno numbar series er jonne  
#include<stdio.h>
int main(){
    int n,i,temp=0,k;
    int sum=0;
    printf("Enter the fixt value : ");
    scanf("%d",&k);
    printf("Enter the item numbar : ");
    scanf("%d",&n);
    for( i=1; i<=n; i++){
        temp=temp*10+k;
        printf("%d ", temp);
       
        sum=sum + temp ;

    }
 printf("\nsum of series : %d \n",sum);
    return 0;
}
