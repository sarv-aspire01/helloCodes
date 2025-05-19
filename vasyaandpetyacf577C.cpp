#include <bits/stdc++.h>
#include <string.h>
using namespace std;
bool isPrime(int nm)
{
    for (int i = 2; i * i <= nm; i++)
    {

        if (nm % i == 0)
        {
            return false;
        }
    }
    return true;
}
void fun()
{

    int n;
    cin >> n;

    vector<int> prim;

    for (int i = 2; i <= n; i++)
    {

        if (isPrime(i))
            prim.push_back(i);
    }

    vector<int> ans;
    for (int i : prim)
    {
        int tmp = i;
        while (tmp <= n)
        {
            ans.push_back(tmp);
            tmp *= i;
        }
    }
    int m = ans.size();
    cout << m << '\n';
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << '\n';
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
