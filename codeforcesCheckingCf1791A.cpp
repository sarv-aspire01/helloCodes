#include <bits/stdc++.h>
using namespace std;

void fun()
{
    char ch;
    cin >> ch;
    string s = "codeforces";
    bool flag = false;

    for (int i =0;i<s.size();i++)
    {
        if (s[i] == ch)
        {
            flag = true;
            break;
        }
    }

    if (flag)
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
