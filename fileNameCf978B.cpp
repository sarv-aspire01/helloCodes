#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin >> n;
    string s;
    int cnt = 0;
    int ans = 0;
    cin >> s;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'x')
        {

            cnt++;
            if (cnt > 2)
            {

                ans++;
            }
        }

        else
        {
            cnt = 0;
        }
    }
    cout << ans << '\n';
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