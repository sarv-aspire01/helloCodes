
#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin >> n;
    int a[n];
    int cntNegOne = 0;
    int cntZeros = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            cntZeros++;
        }
        else if (a[i] < 0)
        {
            cntNegOne++;
        }
        
    }

    if (cntNegOne & 1)
        {
            cout << cntZeros + 2 << '\n';
        }
        else
        { cout<<cntZeros;
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