#include<iostream>
using namespace std;

const int maxn = 100;

int main(){
    int n, m;
    cin >> n >> m;   // input number of nodes and edges

    int adjmatrix[maxn][maxn];

    // Step 1: Initialize matrix
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            adjmatrix[i][j] = 0;
        }
    }

    // Step 2: Input edges
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        adjmatrix[u][v] = 1;
        adjmatrix[v][u] = 1; // undirected graph
    }

    // Step 3: Print adjacency matrix
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << adjmatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



