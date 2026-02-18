#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{

    int a, b;
    cin >> a >> b;

    int c = gcd(a, b);
    a = a / c;
    b = b / c;
    if (abs(a - b) == 1)
    {
        cout << "Equal" << '\n';
    }
    else if (min(a, b) == a)
    {
        cout << "Dasha" << '\n';
    }
    else
    {
        cout << "Masha" << '\n';
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}
