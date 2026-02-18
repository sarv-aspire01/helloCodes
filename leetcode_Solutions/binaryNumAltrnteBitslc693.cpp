
#include <bits/stdc++.h>
using namespace std;


bool hasAlternatingBits(int n)
{
    unsigned int x = n ^ (n >> 1);

    return (x & (x + 1)) == 0;
}

int main()
{
    int n;
    cin >> n;

    if (hasAlternatingBits(n))
    {
        cout << "true" << '\n';
    }
    else
    {
        cout << "false" << '\n';
    }
}
