#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
void fun()
{
    int n, f, k;
    cin >> n >> f >> k;
f-=1;
k-=1;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin >> a[i];
    }

    int ak = a[f];

    stable_sort(a, a + n, greater<>());

    if (a[k] > ak)
    {
        cout << "NO" << '\n';
    }
    else if (a[k] < ak)
    {
        cout << "YES" << '\n';
    }
    else if (k == n - 1 || a[k + 1] < ak)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "MAYBE" << '\n';
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