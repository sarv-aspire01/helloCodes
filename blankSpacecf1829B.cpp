#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
void fun()
{
    int n;
    cin >> n;
    int arr[n];
    int cnt = 0, cnt1 = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
        if (arr[i] == 0)
        {
            cnt++;
        }
        else
        {
            cnt1 = max(cnt, cnt1);
            cnt = 0;
        }
    }
    cout << max(cnt,cnt1) << '\n';
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