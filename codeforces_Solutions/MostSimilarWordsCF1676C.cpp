//---------------------------------

#include <bits/stdc++.h>
using namespace std;


void fun()
{
    int n, m;
    cin >> n >> m;
    vector<string> x(n);

    for (int i = 0; i < n; i++)
    {
        cin >>x[i];
    }
    int ans = INT_MAX;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff=0;
            for(int k=0;k<m;k++){
                diff+=abs(x[i][k]-x[j][k]);
            }
            ans = min(ans,diff);

        }
    }

    cout<<ans<<'\n';

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
