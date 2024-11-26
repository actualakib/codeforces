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
    int n, m,store=0;
    cin >> n >> m;
    if (n<m)
    {
       cout<<-1;
    }
    else{
            if (n%2==0)
            {
             store = n/2;
            }else{
             store = (n/2)+1;
            }  
            while (1)
            {
                if (store % m ==0)
                {
                    cout<<store;
                    return;
                }
                if (store>n)
                {
                     cout<<-1;
                     return;
                }
                store++;
            }
        }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // ll t;
    // cin >> t;
    // ll case_num = 1;

    // while (t--)
    // {
    solve();
    // }
}
