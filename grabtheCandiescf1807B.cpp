#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

void fun()
{
    int n;
    cin >> n;
    int evn = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x &1)
        {
            odd+=x;
        }
        else
        {
            evn+=x;
        }
    }
    if (evn > odd)
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