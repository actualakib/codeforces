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
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    int sl = max(l, L), sr = min(r, R);
    if (sl > sr)
        cout << 1 << endl;
    else
    {
        int mid = sr - sl;
        if (sl > min(l, L))
            mid++;
        if (sr < max(r, R))
            mid++;
        cout << mid << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
