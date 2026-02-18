#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
void fun()
{

    int A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;

    int area = ((A + B + C) * (A + B + C)) - (A * A) - (C * C) - (E * E);
    cout << area << '\n';
    
}
int main()
{
    int t=1;
    //cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}