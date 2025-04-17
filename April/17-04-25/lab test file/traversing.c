#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int n,i;

    printf("Enter the  generate numbar: ");
    scanf("%d",&n);
    int numbar[n];
    srand(time(NULL));
    printf(" Generatar numbar : \n");
    for(int i=0; i<n; i++){
        numbar[i]=rand()% 100;
        printf(" Random value  %d : %d\n",numbar[i]);

    }
printf("\n Even numbar :\n");
    for(i=0; i<n; i++){
       if(numbar[i] %2== 0){
        printf(" %d ",numbar[i]);

       }
       
    }
    printf("\n odd numbar:\n ");
    for(i=0; i<=n; i++){
        if(numbar[i] %2!=0){
            printf("%d ", numbar[i]);
        }
    }
    return 0;

}