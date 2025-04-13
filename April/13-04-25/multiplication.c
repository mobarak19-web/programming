#include<stdio.h>
int main(){
    int n,m, multiplication;
    printf("Enter the value:");
    scanf("%d",&m);
    printf("Enter the value:");
    scanf("%d",&n);
    for(int i=m;i<=n;i++);
    {
        multiplication=m*n;   
    }
    printf(" multiplication is:%d\n", multiplication);
    return 0;
}