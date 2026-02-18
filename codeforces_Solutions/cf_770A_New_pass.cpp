#include <bits/stdc++.h>

using namespace std;

string distinctPass()
{

    int n, k;
    cin >> n >> k;
    string result;

    char chars;

    for (int i = 0; i < n; ++i)
    {
        chars = 'a' + (i % k);
        result += chars; 
    }


    
    return result;
}
int main()
{

    string ans = distinctPass();
    cout << ans << endl;

    return 0;
}
 