#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{

    string s;
    cin >> s;
    int n = s.size();

    for (char ch : "abcdefgh")
    {
        if (ch != s[0] && ch)
        {

            cout << ch << s[1] << '\n';
        }
    }

    for (char ch : "12345678")
    {
        if (ch != s[1] && ch)
        {

            cout << s[0] << ch << '\n';
        }
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
