#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int a = x / k;
    int b = y / k;
    if (x % k != 0)
    {
        a++;
    }
    if (y % k != 0)
    {
        b++;
    }
    if (b >= a)
    {
        cout << 2 * b << endl;
    }
    else
        cout << 2 * a - 1 << endl;
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
