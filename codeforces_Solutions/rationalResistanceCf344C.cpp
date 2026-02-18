#include <bits/stdc++.h>
using namespace std;

void fun()
{
    long long int a, b;
    cin >> a >> b;
    long long int x, y = a / b;
    a = a % b;
    while (a && b)
    {
        if (a > b)
        {
            x = a / b;
            a -= b * x;
        }
        else
        {
            x = b / a;
            b -= a * x;
        }
        y += x;
    }
    cout << y << '\n';


}
int main()
{
    int t = 1;
    //  cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}
