#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,j,n;
    char temp[100],word[100][100];
    printf("Enter numbar of word:");
    scanf("%d",&n);
    printf("\nEnter %d word:",n);
    for(i=1;i<=n;i++){
        printf("\nWORD[%d]:",i);
        scanf("%s",word[i]);

    }
    //sorting
    for(j=1;j<=n-1;j++){
        for(i=1;i<n-j;i++){
            if(strcmp(word[i],word[i+1])>0){
                //interchange
                strcpy(temp,word[i]);
                strcpy(word[i],word[i+1]);
                strcpy(word[i+1],temp);
                
            }
        }
    }
    printf("\n sorting list:\n");
    for(i=1;i<=n;i++){
        printf("\nWORD[%d]:%s",i,word[i]);

    }
    return 0;
}