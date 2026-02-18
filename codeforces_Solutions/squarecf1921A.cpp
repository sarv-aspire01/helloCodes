#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{
    int x[4], y[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i] >> y[i];
    }

    sort(x, x + 4);
    int d = abs(x[3] - x[0]);
    cout << d * d << '\n';
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