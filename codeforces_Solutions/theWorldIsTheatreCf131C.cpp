#include <bits/stdc++.h>
#include <string.h>
using namespace std;
typedef long long ll;

ll ncr(int n, int r) // calc ncr
{
    ll sum = 1;
    for (ll i = 1; i <= r; i++)
    {
        sum = sum * (n - r + i) / i;
    }
    return sum;
}

ll cntwys(int n, int m, int t, int x, int y) // no. of ways
{
    ll sum = 0;
    for (ll i = x; i <= n; i++)
    {
        if (t - i >= y && t - i <= m)
        {
            sum += (ncr(n, i) * ncr(m, t - i));
        }
    }
    return sum;
}

void fun()
{

    int nbys, mgrls, t_actrs;
    cin >> nbys >> mgrls >> t_actrs;

    int xbys = 4, ygrls = 1; // atleast 4 boys and 1 girls;

    cout << cntwys(nbys, mgrls, t_actrs, xbys, ygrls) << '\n';
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