#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;

    string msg;
    cin >> n;
    cin >> msg;
    string ans = "";

    if (n % 2 == 0)
    {
        {
            for (int k = 0; k < n; k++)
            {

                if (k % 2 == 1)
                {
                    ans += msg[k];
                }
                else
                {
                    ans = msg[k] + ans;
                }
            }
        }
    }
    else
    {

        {
            for (int k = 0; k < n; k++)
            {

                if (k % 2 == 0)
                {
                    ans += msg[k];
                }
                else
                {
                    ans = msg[k] + ans;
                }
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