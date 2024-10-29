#include <bits/stdc++.h>
using namespace std;
int const N = 1e3;
int graphAdjacencyMatrix[N][N];
vector<int> graphAdjacencyList[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int node, edge;
        cin >> node >> edge;

        // Input for Adjacency Matrix representation.
        graphAdjacencyMatrix[node][edge] = 1;
        graphAdjacencyMatrix[edge][node] = 1;

        // Input for Adjacency List representation.
        graphAdjacencyList[node].push_back(edge);
        graphAdjacencyList[edge].push_back(node);
    }

    cout << "Adjacency Matrix Representation : " << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << graphAdjacencyMatrix[i][j] << " ";
        cout << '\n';
    }

    cout << "Adjacency List Representation : " << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < graphAdjacencyList[i].size(); j++)
            cout << graphAdjacencyList[i][j] << " ";
        cout << '\n';
    }
    cout << '\n';
}