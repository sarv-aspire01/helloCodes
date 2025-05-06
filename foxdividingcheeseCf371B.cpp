#include <bits/stdc++.h>
using namespace std;
#include <string.h>

void fun()
{

    int a, b;
    cin >> a >> b;
    int a2 = 0, a3 = 0, a5 = 0, b2 = 0, b3 = 0, b5 = 0;
    while (a % 2 == 0)
    {
        a /= 2;
        a2++;
    }
    while (a % 3 == 0)
    {
        a /= 3;
        a3++;
    }
    while (a % 5 == 0)
    {
        a /= 5;
        a5++;
    }
    int cheseA = a;
    while (b % 2 == 0)
    {
        b /= 2;
        b2++;
    }

    while (b % 3 == 0)
    {
        b /= 3;
        b3++;
    }

    while (b % 5 == 0)
    {
        b /= 5;
        b5++;
    }

    int cheseB = b;
    if (cheseA != cheseB)
    {
        cout << "-1" << '\n';

        return;
    }
    int ans = (abs(a2 - b2) + abs(a3 - b3) + abs(a5 - b5));
    cout << ans << '\n';
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
