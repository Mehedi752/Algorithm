// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int const N = 1e5 + 10;
vector<int> graph[N], level(N);
bool visited[N];

void dfs(int vertex)
{
    cout << vertex << '\n';
    visited[vertex] = 1;
    for (auto child : graph[vertex])
    {
        // cout << "Parent : " << vertex << " " << "Children : " << child << '\n';
        if (visited[child])
            continue;
        level[child] = level[vertex] + 1;
        dfs(child);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int node, edge;
        cin >> node >> edge;
        graph[node].push_back(edge);
        graph[edge].push_back(node);
    }
    int source = 0;
    dfs(source);
}