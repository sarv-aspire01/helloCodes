//---------------------------------
/* concepts
sorting, strings



 */
#include <bits/stdc++.h>
using namespace std;

void fun()
{

    string str;
    cin >> str;
    int n = str.size();
    bool found = false;

    for (int i=0;i<n;i++)
    {
        if (str[i] == str[i + 1])
        {
            found = true;
            break;
        }
        else
        {
            found = false;
        }
    }

    if (found)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << n << '\n';
    }
}

int main()
{
    //  #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin); // Redirect stdin to input.txt
    //  #endif
    int t;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}
