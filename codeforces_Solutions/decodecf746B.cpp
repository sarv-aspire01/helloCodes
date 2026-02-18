#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;

    string msg;
    cin >> n;
    cin >> msg;
    string ans(n, ' ');
    int i = 0, j = n - 1, k = 0;
    if (n < 3)
    {
        cout << msg;
    }
    else if (n % 2 == 0)
    {
        for(int k=0;k<n;k++)
        {

            if (k % 2 == 0)
            {
                ans[j] = msg[k];
                j--;
             
            }
            else
            {
                ans[i] = msg[k];
                i++;
               
            }
        }
    }
    else
       
    { for(int k=n-1;k>=0;k--)
        {

            if (k % 2 == 0)
            {
                ans[j] = msg[k];
                j--;
               
            }
            else
            {
                ans[i] = msg[k];
                i++;
             
            }
        }
    }

    cout << ans << '\n';
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