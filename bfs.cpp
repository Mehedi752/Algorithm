// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int const N = 1e5 + 10;
vector<int> graph[N];
int visitedNode[N], level[N];

void bfs(int source)
{
    queue<int> qt;
    qt.push(source);
    visitedNode[source] = 1;

    while (!qt.empty())
    {
        int currentParentNode = qt.front();
        qt.pop();
        cout << currentParentNode << " ";
        for (auto &child : graph[currentParentNode])
        {
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
        graph[node].push_back(edge);
        graph[edge].push_back(node);
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