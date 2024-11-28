#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, odd = 0, even = 0, even_sum = 0, max_odd = LLONG_MIN, max_arr = LLONG_MIN;
        cin >> n;
        long long ar[n];
        
        for (long long i = 0; i < n; i++)
        {
            cin >> ar[i];
            max_arr = max(ar[i], max_arr);
            if (ar[i] % 2 != 0)
            {
                odd++;
                max_odd = max(ar[i], max_odd);
            }
            else
            {
                even++;
                even_sum += ar[i];
            }
        }

        if (odd == 0 || even == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            sort(ar, ar + n);

            for (long long i = 0; i < n; i++)
            {
                if (ar[i] % 2 == 0 && ar[i] < max_odd)
                {
                    max_odd += ar[i];
                }
            }

            long long ans = even + 1;
            if (ar[n - 1] % 2 != 0 || max_odd > ar[n - 1]) 
            {
                ans -= 1;
            }
            cout << ans << endl;
        }
    }
}
