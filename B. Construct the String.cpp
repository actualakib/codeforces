#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N = 2e5 + 5;
ll n, k;
string s;
#define PI 3.14

void solve()
{
    int a, b;
    cin >> n >> a >> b;
    s = "";
    for (int i = 0; i < b; i++)
    {
        s += 'a' + i;
    }

    for (int i = b; i < a; i++)
    {
        s += s[b - 1];
    }

    string result = "";
    while (result.size() < n)
    {
        result += s;
    }

    cout << result.substr(0, n) << endl;
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
