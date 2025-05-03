#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void fun()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s[n - 1] == 'A') //if the last card is of alice
    {
        if (s[0] == 'A' || s[n-2] == 'A') //and the first one or card before last one is also of alice then alice wins
        {
            cout << "Alice" << '\n';
        }
        else
        {
            cout << "Bob" << '\n';
        }
        return;
    }

    int cnt = count(s.begin(), s.end(), 'B');  

    if (s[n - 1] == 'B')  //else if  last card is of bob and there is atleast one more bob's card then he will win
    {
        if (cnt > 1)
        {
            cout << "Bob" << '\n';
        }
        else
        {
            cout << "Alice" << '\n';
        }
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