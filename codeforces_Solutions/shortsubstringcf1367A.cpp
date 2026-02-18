#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{

    string s;
    cin >> s;
    int n = s.size();
    string ss = s.substr(0, 2);

    for (int i = 3; i < n; i += 2)
    {
        ss += s[i];
    }
    cout << ss << '\n';
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
