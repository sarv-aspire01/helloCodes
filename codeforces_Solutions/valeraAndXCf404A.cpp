//---------------------------------

#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin >> n;
    unordered_set<char> diag_chars;
    unordered_set<char> rest_chars;
    bool check = true;
    char c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c;
            if (i == j||i == n - (j + 1))
            {
                diag_chars.insert(c);
            }
            else
            { 
                rest_chars.insert(c);
            }
        }
    }

    if (diag_chars.size() != 1 || rest_chars.size() != 1|| diag_chars==rest_chars)
    {
        check = false;
    }
    cout << ((check) ? "YES" : "NO") << '\n';
}

int main()
{

    int t = 1;
    // cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}
