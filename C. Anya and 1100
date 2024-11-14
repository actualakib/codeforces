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
    string str;
    cin >> str;
    int q, count = 0;
    cin >> q;
    vector<pair<int, char>> pr;
    while (q--)
    {
        int a;
        char b;
        cin >> a >> b;
        pr.push_back({a - 1, b});
    }
    for (int i = 0; i < str.size() - 3; i++)
    {
        if (str.substr(i, 4) == "1100")
        {
            count++;
        }
    }

    for (auto it : pr)
    {
        for (int j = it.first - 3; j <= it.first; j++)
        {
            if (j >= 0 && j + 3 < str.size() && str.substr(j, 4) == "1100")
            {
                count--;
            }
        }

        str[it.first] = it.second;

        for (int j = it.first - 3; j <= it.first; j++)
        {
            if (j >= 0 && j + 3 < str.size() && str.substr(j, 4) == "1100")
            {
                count++;
            }
        }

        if (count > 0)
        {
          yes;
        }
        else
        {
           no;
        }
    }
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
