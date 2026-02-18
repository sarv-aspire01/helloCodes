#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void fun()
{
    int n, k;
    cin>>n>>k;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s, s + n);

    set<int> ans;
    for (int i = 0; i < n; i++)
    {

        if (s[i] % k != 0)
        {
            ans.insert(s[i]);
        }
        else if (ans.count(s[i] / k) == 0)
        {
            ans.insert(s[i]);
        }
    }
    cout << ans.size() << '\n';
 
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
