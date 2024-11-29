#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N = 2e5 + 5;

void solve()
{
    ll l, r;
    cin >> l >> r;

    ll length = 0;
    ll current = l;
    ll diff = 1;

    while (current <= r)
    {
        length++;
        current += diff;
        diff++;
    }

    cout << length << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
