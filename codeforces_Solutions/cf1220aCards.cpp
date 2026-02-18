#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

     cin >> n;
     vector<char> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());



    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'z')
        {
            
            cout << '0' << " ";
        }

        else if (a[i] == 'n')
        {
            
            cout << '1' << " ";
        }
    }

    return 0;
}
