#include <bits/stdc++.h> //Knapsack(0-1)
using namespace std;
const int N = 2e5 + 10;
int wt[105], val[105];
long long dp[105][100005];

long long knapsack(int ind, int wt_left)
{
    if (wt_left == 0)
        return 0;
    if (ind < 0)
        return 0;

    if (dp[ind][wt_left] != -1)
        return dp[ind][wt_left];

    long long rs = knapsack(ind - 1, wt_left);
    if (wt_left - wt[ind] >= 0)
        rs = max(rs, knapsack(ind - 1, wt_left - wt[ind]) + val[ind]);

    return dp[ind][wt_left] = rs;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];

    cout << knapsack(n - 1, w) << endl;
}