#include<bits/stdc++.h>
using namespace std;
 int main(){
    int T;
    cin>> T;
    for(int cs=1; cs<=T;cs++){
        string s,t;
        cin>>s;
        cin>>t;
        int i=0;
       int N=s.size()+t.size();
        while (i<s.size() && i<t.size() && s[i]==t[i])
        {
            i++;
        }
        cout<< i <<'\n';
        cout<<  N - 2*i << '\n';

    }
    return 0;
 }
