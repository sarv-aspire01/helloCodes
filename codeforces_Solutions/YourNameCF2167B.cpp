//---------------------------------
/* concepts
sorting, strings



 */
#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin >> n;

    string str1, str2;
    cin >> str1 >> str2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2)
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
