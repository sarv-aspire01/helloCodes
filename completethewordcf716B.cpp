#include <bits/stdc++.h>
using namespace std;
int cnt[27];
char c = '?';
bool valid()
{
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] >= 2)
            return false;
    }
    return true;
}

void fun()
{
    string s;
    cin >> s;
    if (s.length() < 26)
    {
        cout << -1 << '\n';
        return;
    }

    for (int i = 25; i < s.length(); i++)
    {
        memset(cnt, 0, sizeof(cnt));

        for (int j = i; j >= i - 25; j--)
        {
            cnt[s[j] - 'A']++;
        }
        if (valid())
        {
            int curr = 0;
            while (cnt[curr] > 0)
                curr++;
            for (int k = i - 25; k <= i; k++)
            {
                if (s[k] == c)
                {
                    s[k] = curr + 'A';
                    curr++;
                    while (cnt[curr] > 0)
                        curr++;
                }
            }

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == c)
                    s[i] = 'A';
            }
            cout << s;
            return;
        }
    }

    cout << -1 << '\n';
    return;
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
