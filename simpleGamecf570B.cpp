#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a = m + 1;

    if (n == 1)
    {
        cout << 1 << '\n';
    }
    else if (m - 1 < n - m )
    {
        cout << a << '\n';
    }
    else
    {
        cout << m - 1 << '\n';
    }
}
