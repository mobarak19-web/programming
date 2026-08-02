#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

#define V 4
#define WHITE 0
#define GRAY 1
#define BLACK 2

int color[V], prev[V], d[V];

int adj[V][V] = {
    {0, 1, 1, 0},
    {0, 0, 1, 1},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
};

void BFS(int s){

    for(int i = 0; i < V; i++){
        color[i] = WHITE;
        prev[i] = -1;
        d[i] = -1;
    }

    queue<int> q;

    color[s] = GRAY;
    d[s] = 0;

    q.push(s);

    while(!q.empty()){

        int u = q.front();
        q.pop();

        for(int v = 0; v < V; v++){

            if(adj[u][v] == 1){

                if(color[v] == WHITE){

                    color[v] = GRAY;
                    d[v] = d[u] + 1;
                    prev[v] = u;

                    q.push(v);
                }
            }
        }

        color[u] = BLACK;
    }
}

int main(){

    BFS(0);

    cout << "Vertex\tDistance\tPrev\n";

    for(int i = 0; i < V; i++){

        cout << i << "\t" << d[i] << "\t\t" << prev[i] << endl;
    }

    return 0;
}