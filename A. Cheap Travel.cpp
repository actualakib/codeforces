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
    double n, m, a, b;
    cin >> n >> m >> a >> b;

   
    cout << fixed << setprecision(0); 
    if (a > (b / m))
    {
        int int_n = n;
        int int_b = b;
        int int_m = m;
        cout << min((ceil(n / m) * int_b), ((int_n / int_m) * int_b) + (int_n % int_m) * a);
    }
    else
    {
        cout << n * a;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // ll t;
    // cin >> t;
    // // ll case_num = 1;

    // while (t--)
    // {
    solve();
    // }
}
