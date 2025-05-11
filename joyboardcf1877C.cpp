#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
void fun()
{

    int n, m, k;
    cin >> n >> m >> k;

    int ans;
    if (k == 1)
    {
        ans = 1;
    }
    else if (k == 2)
    {
        if (m <= n)
        {
            ans = m;
        }
        else if (m > n)
        {
            ans = n + ((m - n) / n);
        }
    }
    else if (k == 3)
    {
        if (m <= n)
        {
            ans = 0;
        }
        else if (m > n)
        {
            ans = m - n - ((m - n) / n);
        }
    }
    else if(k>3)
    {
        ans = 0;
    }

    cout<<ans<<'\n';
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