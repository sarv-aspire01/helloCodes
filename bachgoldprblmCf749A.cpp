#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
void fun()
{

    int n;
    cin >> n;
    int k, o = 0;
    if (!(n & 1))
    {
        k = n / 2;
        cout << k << '\n';
        for (int i = 0; i < k; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        k = (n - 1) / 2;
        o = 1;
        cout << k << '\n';
        for (int i = 1; i < k; i++)
        {
            cout << 2 << " ";
        }

        if (o)
        {
            cout << 3 << '\n';
        }
    }
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