#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n, m;
    cin >> n >> m;
    int pairs[20][20];
    int cnt = 0, cntmbox = 0, cntm = 0;

    for (int i = 0; i < m; i++)
    {
        cin >> pairs[i][0] >> pairs[i][1];
        cntmbox += pairs[i][0];
        cntm += pairs[i][0] * pairs[i][1];
    }

    if (cntmbox <= n)
    {
        cout << cntm;
        return;
    }

    while (n)
    {
        int x = 0;
        for (int i = 0; i < m; i++)
        {
            if (pairs[x][1] < pairs[i][1])
            {
                x = i;
            }}

            if (n <= pairs[x][0])
            {
                cnt += n * pairs[x][1];
                cout << cnt;
                return;
            }
            else
            {
                cnt += pairs[x][0] * pairs[x][1];
                n = n - pairs[x][0];
                pairs[x][1] = 0;
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