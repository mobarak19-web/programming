#include<stdio.h>
int p(int x,int y)
{

     if(y==0|| x==1)
     return 1;
     else
     return (x*(p(x,y-1)));
}
int main()
{
    int b ,s,r;
    scanf("%d %d",&b ,&s);
    r=p(b,s);
    printf(" %d ",r);
}