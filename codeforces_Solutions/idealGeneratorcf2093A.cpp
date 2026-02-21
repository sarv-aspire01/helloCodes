
#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin >> n;

    if (n & 1)
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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // Redirect stdin to input.txt
#endif
    int t;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}