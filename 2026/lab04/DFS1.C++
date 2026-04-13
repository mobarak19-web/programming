#include<iostream>
#include<stdio.h>
using namespace std;

#define V 4
#define WHITE 0
#define GRAY 1
#define BLACK 2

int color[V], prev[V], d[V], f[V], time;

int adj[V][V]={
    {0, 1, 1, 0},
    {0, 0, 1, 1},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
};
void DFS_visit(int u){
    color[u] = GRAY;
    time +=1;
    d[u] =time;

    for( int v = 0; v < V; v++){
        if(adj[u][v]== 1){
            if(color[v]==WHITE){
                prev[v] = u;
                DFS_visit(v);
            }
        }

    }
    color[u] = BLACK ;
     time +=1;
     f[u] = time ;

}

void DFS(){
    for( int u = 0; u < V; u++){
        color[u] = WHITE;
        prev[u] = -1;
        d[u] = -1;
        f[u] = -1;

    }
        time = 0;

        for(int u=0; u<V; u++){
            if( color[u] == WHITE){
                DFS_visit(u);

            }
        }
    
}
int main(){
    DFS();
   
    cout << "Vertex\tDisc\tFinish\tPrev\n";
    for (int i = 0; i < V; i++) {
        cout << i << "\t" << d[i] << "\t" << f[i] << "\t" << prev[i] << endl;
    }

    return 0; 
}