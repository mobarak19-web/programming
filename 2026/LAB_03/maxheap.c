#include<stdio.h>
int left(int i){
    return 2*i + 1;

}
int right( int i){
    return 2*i + 2;
}
void max_heap(int a[], int i,int n){
    int l=left(i);
    int r= right(i);
    int largest= i;

    if(l<n && a[l]>a[i]){
        largest=l;

    }
      if(r<n && a[r]>a[largest]){
        largest=r;
      }
      if(largest != i){
        int temp ;
        temp = a[i];
        a[i] =a[largest];
        a[largest] = temp ;
        max_heap(a,largest,n);

      }

}
void build_max_heap(int a[], int n){
    for(int i=n/2 -1; i>=0; i--){
        max_heap(a,i,n);
    }
}
void heapsort(int a[], int n){
    build_max_heap(a,n);

    for(int i=n-1; i>0; i--){
        int temp;
        temp=a[0];
        a[0]=a[i];
        a[i]= temp;
        max_heap(a,0,i);



    }
}
int main(){
    int i;
    int a[]={4, 10, 3, 5, 1};
    int n=5;
    printf("Unsorted array : ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);

    }
    heapsort(a,n);
    printf("\n sorted barray \n :");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);

    }
    printf("\n");
    return 0;
}