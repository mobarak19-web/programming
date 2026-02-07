#include<iostream>
using namespace std;
int main(){
int x,y;
cin >> x >> y ;
int total_sum = x+y ;
cout << total_sum << "\n" ;

if(total_sum >=100){
    cout << "Yes";

}else{
    cout << "No";
}
return 0;
}