#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{
    int n;
    cin >> n;

    string s;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s += "I hate that ";
        }
        else
        {
            s += "I love that ";
        }
    }
    s = s.erase(s.size() - 5, s.size());
    s += "it";
    cout << s;
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
