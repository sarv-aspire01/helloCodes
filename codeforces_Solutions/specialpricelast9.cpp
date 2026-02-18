//part of qs specialoffercf219B but it calculate minimum discount to make price with trailling 9 at end not the max possible discunt under dscnt with max no of 9 at end.

#include <bits/stdc++.h>
using namespace std;
 
void fun()
{
    long long int prce, dscnt;
 
    cin >> prce >> dscnt; // original price and max possible discount
 
    if (dscnt == 0) // if there is no discount then original price is fix
    {
        cout << prce << '\n';
        return;
    }
 
    int n = log(dscnt) / log(10);
 
    long long int p = pow(10, n);
 
    int x = (prce % p) + 1; // max price that can discounted to make it special offer
    // cout << x << '\n';   //discounted value
 
    if ((prce - x) % 10 == 9)
    {
        cout << prce - x << '\n'; // discount only if there is trailing 9 at the end
    }
    else
    {
        cout << prce << '\n';
    }
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