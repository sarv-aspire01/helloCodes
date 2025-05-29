#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int l, r;
    cin >> l >> r;
    if (2 * l > r)
    {
        cout << "-1" << " " << "-1" << '\n';
    }
    else
    {
        cout << l << " " << 2 * l << '\n';
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}