//---------------------------------

#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n, j, k,mx=0;
    cin >> n>>j>>k;
    vector<int> players(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin >> players[i];
        mx=max(mx,players[i]);
        
    }

 


    if (k>1||players[j]==mx)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
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
