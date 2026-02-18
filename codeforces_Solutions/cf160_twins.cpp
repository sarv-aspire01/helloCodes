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
    sort(a.begin(), a.end(), greater<int>());
    int total = accumulate(a.begin(), a.end(), 0);
    int sumA = 0, count = 0;

    for (int i = 0; i < n; i++)
    { //cout<<a[i]<<" ";
        sumA += a[i];
        count++;
        if (sumA > total / 2)
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
