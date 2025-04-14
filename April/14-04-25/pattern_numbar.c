#include<stdio.h>
int main(){
    int numbar, row,column;
    printf("Enter the numbar :");
    scanf("%d",&numbar);
    for(row=1;row<=numbar;row++){
        
          for(column=1;column<=row;column++){

            printf(" %d ",column);

          }
    
           printf("\n");

    }
    return 0;
}