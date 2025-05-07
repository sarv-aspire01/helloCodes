#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void fun()
{
    ll n;
    cin >> n;
    bool flag = 0;
    ll tmp = 1;
    for (ll i = 2; i * i <= n; ++i)
    {
        if (!(n % i))
        {
            tmp *= i;

            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
        tmp *= n;
    cout << tmp;
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