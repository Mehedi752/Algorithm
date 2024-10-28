#include <bits/stdc++.h>
using namespace std;
int const N = 1e3;
int graph[N][N];
vector<int> graphList[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int node, edge;
        cin >> node >> edge;

        // Input for Adjacency Matrix representation.
        graph[node][edge] = 1;
        graph[edge][node] = 1;

        // Input for Adjacency List representation.
        graphList[node].push_back(edge);
        graphList[edge].push_back(node);
    }

    cout << "Adjacency Matrix Representation : " << '\n';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << graph[i][j] << " ";
        cout << '\n';
    }

    cout << "Adjacency List Representation : " << '\n';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < graphList[i].size(); j++)
            cout << graphList[i][j] << " ";
        cout << '\n';
    }
    cout << '\n';
}