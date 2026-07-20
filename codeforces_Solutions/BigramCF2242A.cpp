#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int k;
    cin >> k;
    bool C0 = false;
    bool C1 = false;
    int x = 20; //in qs k is limited to 10 (1<=k<=10) so we can use any >10
    bool C2 = false;
    int c = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> c;
        if (c > 2)
        {
            C0 = true;
        }
        else if (c == 2 && x >10)
        {
            C1 = true;
            x = i;
        }
        else if (c == 2 && i != x)
        {
            C2 = true;
        }
    }

    if (C0 || C1 == true && C2 == true)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
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