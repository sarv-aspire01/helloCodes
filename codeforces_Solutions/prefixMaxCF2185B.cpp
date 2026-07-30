//---------------------------------

#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n,mx=0;
    cin >> n;
    vector<int> players(n);
    for (int i = 0; i <n; i++)
    {
        cin >> players[i];
        mx=max(mx,players[i]);
        
    }

 
cout<<mx+mx*(n-1)<<'\n';



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
