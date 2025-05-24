#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (((i / 2) + (j / 2)) & 1)
            {
                cout << '.';
            }
            else
            {
                cout << '#';
            }
        }
        cout << '\n';
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