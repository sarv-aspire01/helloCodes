//helloCodes by sp
//01/05/2025

#include <bits/stdc++.h>

using namespace std;
void fun()
{
    double vp, vd, t, f, c, distPrnces;
    int ans = 0;
    cin >> vp >> vd >> t >> f >> c;
    distPrnces = t * vp;
    if (vd < vp)
    {
        cout << 0 << '\n';
        return;
    }
    while (distPrnces < c)
    {
        double tdrgn = distPrnces / (vd - vp); // time dragon take to reachout princess
        distPrnces = distPrnces + tdrgn * vp;     // distance princess cover before dragon reachout her
        if (distPrnces >= c)
        {
            break;
        }
        double tDrgnback = distPrnces / vd + f; // time  dragon takes to back to cave
        distPrnces = distPrnces + tDrgnback * vp;  // distance princess will take while dragon return back
        ++ans;
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
