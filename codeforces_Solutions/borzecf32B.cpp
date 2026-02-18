#include <bits/stdc++.h>
using namespace std;
void fun()
{

    string s;
    cin >> s;
    string ans = "";
    for (int i=0;i<s.size();i++)
    {
        if (s[i] == '.')
        {
            ans += '0';
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            ans += '1';
            i += 1;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            ans += '2';
            i += 1;
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    int t=1;
    //cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}