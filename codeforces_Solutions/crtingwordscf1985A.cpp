#include <bits/stdc++.h>
using namespace std;

void fun()
{
    string a,b;
    cin>>a>>b;
    char t =b[0];
b[0]=a[0];
a[0]=t;

    cout << a<<" "<<b << '\n';
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
