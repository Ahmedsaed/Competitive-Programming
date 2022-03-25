#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5;
int n_nodes, n_edges;

vector<int> g[N];

int main() {
    cout << "Enter n_nodes and n_edges: ", cin >> n_nodes >> n_edges;
    
    // Read input for graph
    for (int i = 0; i < n_edges; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        
        g[n1].push_back(n2);
        g[n2].push_back(n1);
    }
    
    // print the graph
    for (int i = 0; i < n_nodes; i++)
    {
        cout << "Node " << i << " has edges with: ";
        for (int item : g[i])
            cout << item << " ";
        cout << "\n";
    }
    
    return 0;
}