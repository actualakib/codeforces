#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<string> strings(m);
    for (int i = 0; i < m; i++)
    {
        cin >> strings[i];
    }

    for (const string &s : strings)
    {
        if (s.size() != n)
        {
            cout << "NO" << endl;
            continue;
        }

        unordered_map<int, char> n_ch;
        unordered_map<char, int> ch_n;
        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            int num = a[i];
            char ch = s[i];

            if (n_ch.count(num))
            {
                if (n_ch[num] != ch)
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                n_ch[num] = ch;
            }

            if (ch_n.count(ch))
            {
                if (ch_n[ch] != num)
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                ch_n[ch] = num;
            }
        }

        ok ? yes : no;
    }
}

int main()
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
