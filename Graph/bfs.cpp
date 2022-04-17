#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int N = 1e5 + 5;

int n, m, parent[N];
vector<int> g[N];
bool visited[N];


int main() {
    cout << "Enter n_nodes and n_edges: ", cin >> n >> m;
    
    // Read input for graph
    for (int i = 0; i < m; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        
        g[n1].push_back(n2);
        g[n2].push_back(n1);
    }

    queue<int> qu;

    // Assume that the root is 1
    qu.push(1);
    visited[1] = true;
    parent[1] = 1;

    while (!qu.empty())
    {
        int current = qu.front();
        qu.pop();   

        for (int neg : g[current]) {
            if (!visited[neg]) { 
                qu.push(neg);
                parent[neg] = current;
                visited[neg] = true;
            }
        }

        cout << current << endl;
    }

    return 0;
}