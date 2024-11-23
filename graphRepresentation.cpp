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

        graphAdjacencyList[node].push_back(edge);
        graphAdjacencyList[edge].push_back(node);
    }

    cout << "Adjacency List Representation : " << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << i;
        for (int j = 0; j < graphAdjacencyList[i].size(); j++)
            cout << "->" << graphAdjacencyList[i][j];
        cout << '\n';
    }
    cout << '\n';
}