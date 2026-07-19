#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    string row, str;

    for (int i = 0; i < 8; ++i)
    {
        cin >> row;
        for (int c = 0; c < 8; ++c)
        {
            if (isalpha((row[c])))
            {
                str += row[c];
                
                break;
            }
        }
    }

    cout << str << '\n';
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