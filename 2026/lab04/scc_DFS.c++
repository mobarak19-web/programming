#include <iostream>
#include <vector>
#include <stack>
using namespace std;

#define V 5

vector<int> adj[V];      // original graph
vector<int> transpose[V]; // reversed graph
bool visited[V];

// Step 1: DFS to fill stack
void fillOrder(int u, stack<int> &st) {
    visited[u] = true;

    for (int v : adj[u]) {
        if (!visited[v]) {
            fillOrder(v, st);
        }
    }
    st.push(u); // push after finishing
}

// Step 2: DFS on transposed graph
void DFS_Transpose(int u) {
    visited[u] = true;
    cout << u << " ";

    for (int v : transpose[u]) {
        if (!visited[v]) {
            DFS_Transpose(v);
        }
    }
}

// Function to find SCC
void findSCC() {
    stack<int> st;

    // Step 1: fill stack
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            fillOrder(i, st);
        }
    }

    // Step 2: create transpose graph
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            transpose[v].push_back(i);
        }
    }

    // Step 3: DFS on transpose
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }

    cout << "Strongly Connected Components:\n";

    while (!st.empty()) {
        int u = st.top();
        st.pop();

        if (!visited[u]) {
            DFS_Transpose(u);
            cout << endl;
        }
    }
}

int main() {
    // Example graph
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[1].push_back(3);
    adj[3].push_back(4);

    findSCC();

    return 0;
}
