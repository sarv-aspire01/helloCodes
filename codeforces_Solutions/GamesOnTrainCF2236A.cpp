//---------------------------------

#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n, mx = 0, mn = INT_MAX, k;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }
    k = (mx - mn) + 1;
    cout << k << '\n';
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin); // Redirect stdin to input.txt
// #endif
    int t;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}
