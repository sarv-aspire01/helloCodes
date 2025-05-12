#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{
    string s;
    cin >> s;
    bool c = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            c = 0;
        }
    }
    if (c)
    {
        for (auto &it : s)
        {
            if (isupper(it))
            {
                it = tolower(it);
            }
            else
            {
                it = toupper(it);
            }
        }
    }

    cout << s << '\n';
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