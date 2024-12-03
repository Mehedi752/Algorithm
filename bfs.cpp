// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int const N = 1e5 + 10;
vector<int> graphAdjacencyMatrix[N];
int visitedNode[N], levegl[N];

void bfs(int source)
{
    queue<int> qt;
    qt.push(source);
    visitedNode[source] = 1;

    while (!qt.empty())
    {
        int currentParentNode = qt.front();
        qt.pop();
        cout << currentParentNode << "\n";
        for (auto &child : graphAdjacencyMatrix[currentParentNode])
        {
            cout<<child<<'\n';
            if (!visitedNode[child])
            {
                qt.push(child);
                visitedNode[child] = 1;
                level[child] = level[currentParentNode] + 1;
            }
        }
    }
}

void Mehedi()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int node, edge;
        cin >> node >> edge;
        graphAdjacencyMatrix[node].push_back(edge);
        graphAdjacencyMatrix[edge].push_back(node);
    }
    bfs(1);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        Mehedi();
    return 0;
}