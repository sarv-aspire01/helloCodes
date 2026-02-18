#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << "-1" << '\n';
        return;
    }

    long long int a, b;
    
    if (n & 1)
    {
        a = ((1LL * n * n - 1) / 2);
        b = ((1LL * n * n + 1) / 2);
    }
    else
    {
        a = ((1LL * n * n) / 4) - 1;
        b = ((1LL * n * n) / 4) + 1;
    }
    cout << a << " " << b << '\n';
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