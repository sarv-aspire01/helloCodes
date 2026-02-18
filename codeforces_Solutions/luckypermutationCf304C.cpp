#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{
    int n;
    cin >> n;
    if (n%2==0)
    {
        cout << "-1" << '\n';
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << ((i + i) % n) << " ";
    }
    cout << '\n';
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