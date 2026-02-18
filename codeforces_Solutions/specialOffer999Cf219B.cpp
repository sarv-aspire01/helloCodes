#include <bits/stdc++.h>
using namespace std;

void fun()
{
    long long int prce, dscnt;

    cin >> prce >> dscnt; // original price and max possible discount
    long long ans = prce;
    if (dscnt == 0) // if there is no discount then original price is fix
    {
        cout << prce << '\n';
        return;
    }

    // int n = log(dscnt) / log(10);
    for (int k = 18; k >= 0; --k)
    {

        long long int base = pow(10, k);

        long long int x = (prce / base) * base; // remove last k digits 
        x += (base - 1);        //add base-1 9's at last
        if (x > prce)
        {
            x -= base;
        }

        if (x < 0)
            continue;

        if (prce - x <= dscnt)  //if x is discount is ok, cout
        {
            ans = x;
            break;
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
