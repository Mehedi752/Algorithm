// Mehedi Hasan @Mehedi752
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define MOD 1000000007

void Mehedi()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> vp(n), finalPairList;
    vector<ll> index;
    for (ll i = 0; i < n; i++)
        cin >> vp[i].first >> vp[i].second;

    ll count = 1, endTime = vp[0].second;
    finalPairList.push_back({vp[0].first, vp[0].second});
    index.push_back(1);
 
    for (ll i = 1; i < n; i++)
    {
        if (vp[i].first >= endTime)
        {
            count++;
            endTime = vp[i].second;
            finalPairList.push_back({vp[i].first, vp[i].second});
            index.push_back(i + 1);
        }
    }

    cout << "Maximum number of Tasks can be Completed : " << count << '\n';
    
    cout << "Index of the Tasks : ";
    for (auto x : index)
        cout << x << " ";
    cout << '\n';
    
    cout << "Starting and Ending Time of the Tasks : " << '\n';
    for (auto x : finalPairList)
        cout << x.first << " " << x.second << '\n';
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
