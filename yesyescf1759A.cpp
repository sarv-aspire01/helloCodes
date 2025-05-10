
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{
    string full;
    for (int i = 0; i < 18; i++)
    {
        full += "Yes";
    }
    string s;
    cin >> s;
    if (full.find(s) != string::npos)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }
}
int main()
{
    int t ;
     cin>>t;
    while (t--)
    {
        fun();
    }
    return 0;
}
