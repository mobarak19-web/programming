#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int i,a[100],item,loc=0,n,e;
  printf("Enter No. of Element: ");
  scanf("%d",&n);
  printf("Enter list: ");
  srand(time(NULL));
  for(i=0;i<n;i++){
    a[i]=rand();
    printf("\na[%d] = %d",i,a[i]);
  }
  for(;;)
 {
  printf("\nEnter Insertin Location: ");
  scanf("%d",&loc);
  printf("inserting item :");
  scanf("%d",&item);
  for(i=n-1;i<n;i++)
  {
    a[i+1]=a[i];
  }
  a[loc]=item;
  n=n+1;
  printf("\n List after insert:\n");
  for(i=0;i<n; i++){
    printf("\na [%d]=%d",i,a[i]);
  }
  printf("\npress any vlaue for exit and 1 for continue:");
  scanf("%d",&e);
  if(e!=1)
  return 0;

}
return 0;
}