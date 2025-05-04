#include <bits/stdc++.h>
using namespace std;

void fun()
{
    long long int n, m;
    cin >> n >> m;
    long long int cnt = 0;
    int tmp = 0;
    for (int i = 1; i <= m; i++)
    {
        cnt += (n + (i % 5)) / 5;

        // for (int j = 1; j <= m; j++)
        // {
        //     //tmp = (5 - (i + j) % 5) % 5;
        //     if ((i+j) % 5 == tmp)
        //     {
        //         cnt++;
        //     }
        // }
    }
    cout << cnt << '\n';
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
