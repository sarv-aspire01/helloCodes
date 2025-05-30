#include <bits/stdc++.h>
const unsigned int m = 1e9 + 7;
using namespace std;

int mod(long long int n)
{
    return (n % m + m) % m;
}
void fun()
{

    long long int x, y, n;
    cin >> x >> y >> n;
    long long int z = y-x;
    if (n % 6 == 1)
    {
        cout << mod(x) << '\n';
    }
    else if (n % 6 == 1)
    {
        cout << mod(x) << '\n';
    }
    else if (n % 6 == 2)
    {
        cout << mod(y) << '\n';
    }
    else if (n % 6 == 3)
    {
        cout << mod(z) << '\n';
    }
    else if (n % 6 == 4)
    {
        cout << mod(-x) << '\n';
    }
    else if (n % 6 == 5)
    {
        cout << mod(-y) << '\n';
    }
    else if (n % 6 == 0)
    {
        cout << mod(-z) << '\n';
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