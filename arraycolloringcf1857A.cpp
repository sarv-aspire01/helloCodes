#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
void fun()
{

    int n;
    cin >> n;
    int arr[n];
    bool ok =true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
       
    }
for (int i = 1; i < n; i++)
    {
         if (abs(arr[i]-arr[i-1])!=5 && abs(arr[i]-arr[i-1])!=7)
        {
            ok = false;
            break;
        }
        
    }
  if (ok)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
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