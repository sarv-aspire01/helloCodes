#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int l;
    string s;
    cin >> s;
    l = s.length();
    int cnt = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
    }

    if (s == "0")
    {
        cout << 0 << '\n';
    }
    else if (cnt > 1)
    {
        cout << ((l-1)/2)+1 << '\n';
    }
    else
    {
        cout << l/2 << '\n';
    }
}
int main()
{
    int t = 1;
    //  cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}
