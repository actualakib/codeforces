#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    map<string, int> mp;

    for (int i = 0; i < n - 1; i++)
    {
        string two_gram = s.substr(i, 2);
        mp[two_gram]++; 
    }

    string freq;
    int max_count = 0;
    for (auto &it : mp)
    {
        if (it.second > max_count)
        {
            max_count = it.second;
            freq = it.first;
        }
    }

    cout << freq << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
