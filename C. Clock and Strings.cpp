#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N = 2e5 + 5;
int n, m, t;
string s;

void solve()
{
    int a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;

    for (int i = min(a, b); i < max(a, b); i++)
    {
        if (i == c || i == d)
        {
            cnt++;
        }
    }
    if (cnt == 1)
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    while (t--)
    {
        solve();
    }
}
