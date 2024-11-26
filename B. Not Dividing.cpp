#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == 1)
                x++;

            if (i > 0 && x % arr[i - 1] == 0)
            {
                x++;
            }

            arr.push_back(x);
        }

        for (ll i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
