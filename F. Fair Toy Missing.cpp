#include<bits/stdc++.h>
using namespace std;
int main()
{
    int alice[5];
    int bob[4];
    vector<int> check(102, 5);
    
    for (int i = 0; i < 5; i++)
    {
        cin >> alice[i];
        check[alice[i]] = 1;
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> bob[i];
        check[bob[i]] = 0;
    }

    for (int i = 0; i < 100; i++)
    {
        if(check[i] == 1) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
