#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    vector<int> crntMax(n + 1);
    for (int i = 1; i < n; i++)
    {
        crntMax[a[i]] = i;
    }

    
    for (int i = 0; i < crntMax[n]; i++)
    {
        cout << '\n';
    }


    cout << a[crntMax[n]];


    int prvios = crntMax[n];

    for (int i = n - 1; i > 0; i--)
    {
        if (crntMax[i] < prvios)
        {

            cout << " " << a[crntMax[i]];
        }
        else
        {
            int bfore = crntMax[i] - prvios;

            cout << " " ;
            while (bfore--)
            {
                cout << '\n';
            }
            cout << a[crntMax[i]];
            prvios = crntMax[i];
        }
    }

    cout << '\n';

    return 0;
}
