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
    int n, k, sum = 0;
        cin >> n >> k;
        vector<int> arr(k, 0);
        for (int i = 0; i < k; i++)
        {
            int b, c;
            cin >> b >> c;
            arr[b-1] += c;
        }
        sort(arr.rbegin(), arr.rend());
        for (int i = 0; (i < n && i < k); i++)
        {
            sum += arr[i];
        }
        cout<<sum<<endl;
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
