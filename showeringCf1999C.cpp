#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n, s, m;
    cin >> n >> s >> m;
    bool flag = false;
    int l[n], r[n];
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }
    
    if (l[0] >= s || m - r[n - 1] >= s)
    {
        flag = true;
    }
    else
    {

        for (int i = 1; i < n; i++)
        {
            if ((l[i] - r[i - 1]) >= s)
            {
                flag = true;
                break;
            }
        }
    }

    if (flag)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}
