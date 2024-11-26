#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N = 2e5 + 5;
#define PI 3.14

void solve()
{
    int n;
    cin >> n;
    int store;
    cin >> store;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        store &= x;
    }
    cout << store << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    // ll case_num = 1;

    while (t--)
    {
        solve();
    }
}
