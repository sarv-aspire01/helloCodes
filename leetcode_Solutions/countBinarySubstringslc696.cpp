#include <bits/stdc++.h>
using namespace std;

void fun(string s)
{
    int n = s.length();

    int curr = 1, prev = 0;
    int total = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            curr++;
        }
        else
        {
            total += min(prev, curr);

            prev = curr;
            curr = 1;
        }
    }

    cout << total+min(prev,curr) << '\n';
}

int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    while (t--)
    {
        fun(s);
    }
    return 0;
}