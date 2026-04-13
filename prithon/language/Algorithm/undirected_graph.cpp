#include<bits/stdc++.h>
#include<vector>
using namespace std;
  const int MAXN =100;
 int main(){
    int n,e;
    cin >> n >> e;
    vector<int> adjlist[n+1];
    
    for(int i=0; i<e; i++){
        int v,u;
        cin >> v >> u;
        adjlist[v].push_back(u);
        adjlist[u].push_back(v);

    }
    for(int i=1; i<=n; i++){
        cout << i << " -->";
        for(int j : adjlist[i]){
            cout << j << " ";
            
        }
        cout << '\n';
    }
    return 0;
 }