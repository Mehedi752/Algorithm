// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define MOD 1000000007
vector<int> fiboArray(100);

int fibo(ll n)
{
    if (n == 0 || n == 1) // base case
        return fiboArray[n] = n;

    return fiboArray[n] = fibo(n - 1) + fibo(n - 2); // recursive case
}

void Mehedi()
{
    ll n;
    cin >> n;
    fibo(n);
    for (int i = 0; i < n; i++)
        cout << fiboArray[i] << " ";
    cout << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        Mehedi();
    return 0;
}
