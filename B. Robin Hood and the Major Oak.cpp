#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll start = n - k + 1; 
    ll end = n;           

    ll odd_count = (end + 1) / 2 - (start / 2); 

    if (odd_count % 2 == 0)
    {
        yes; 
    }
    else
    {
        no; 
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
