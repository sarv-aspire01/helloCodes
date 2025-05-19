#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n, a;
    cin >> n >> a;
    int crmnls[n];
    for (int i = 1; i <= n; ++i)
    {
        cin >> crmnls[i];
    }
    int cnt = 0;

    for (int i = 1; i <= n; ++i)
    {

        if (crmnls[i] == 1)
        {
            int d = i - a;

            if ((a - d) < 1 || (a - d) > n || crmnls[i] == crmnls[a - d])
            {
                ++cnt;
            }
        }
    }
    cout << cnt << '\n';
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        fun();
    }
    return 0;
}