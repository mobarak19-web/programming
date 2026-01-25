#include<iostream>
 using namespace std;
 //left and right child khujbe 
 int left(int i){
  return 2*i + 1;
 }
 int right(int i){
  return 2*i +2;
 }
 void max_heap(int a[], int i, int n){
  int l = left(i);
  int r = right(i);
  int largest = i;
   if(l<n && a[l] > a[largest]){
    largest = l;
   }
    if(r<n && a[r] > a[largest]){
    largest = r;
   }
   if(largest != i){
    swap(a[i], a[largest]);
    max_heap(a,largest,n);
   }
 }
 void build_max_heap(int a[], int n){
  for(int i=n/2-1; i>=0; i--){
    max_heap(a,i,n);

  }
 }
 void heapsort(int a[], int n){
  build_max_heap(a,n); 
  for(int i=n-1; i>=0; i--){
    swap(a[0], a[i]);
    max_heap(a,0,i);
  }
}
int main(){
  int i;
  int a[100],n;
  cout << "Enter the array size :\n";
  cin >> n;
  cout << "Enter the array elements : \n";
   for(i=0; i<n; i++){
    cin >> a[i];
   }
  cout << "\n Unsorted array : \n";
  for(int i=0; i<n; i++){
    cout << a[i] << " ";

  }
  heapsort(a,n);
  cout << "\n sorted array :\n";
    for(int i=0; i<n; i++){
    cout << a[i] <<" ";
    }
    return 0;

}
  


 
  