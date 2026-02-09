#include<bits/stdc++.h>
using namespace std ;
 int main (){
    ios_base::sync_with_stdio(false);
    cin.tie (nullptr);
 int t;
 cin >> t;
 for(int cs=1; cs<=t; cs++ ){
    int n;
    cin >> n;
    int d1,d2;
    d2=n%10;
    d1=n/10;
    cout << d1 + d2 << '\n';

 }
 return 0;
 }