#include <bits/stdc++.h>
using namespace std;

void fun()
{
    string stnya, snppr;
    cin >> stnya >> snppr;

    unordered_map<char, int> freq;
    for (char ch : snppr)
        freq[ch]++;

    int ans1 = 0, ans2 = 0;
    vector<bool> matched(stnya.size(), false);

    for (int i = 0; i < stnya.size(); ++i)
    {
        if (freq[stnya[i]] > 0)
        {
            ans1++;
            freq[stnya[i]]--;
            matched[i] = true;
        }
    }

    for (int i = 0; i < stnya.size(); ++i)
    {
        if (matched[i])
            continue;
        char up = toupper(stnya[i]);
        char low = tolower(stnya[i]);
        if (freq[up] > 0)
        {
            ans2++;
            freq[up]--;
        }
        else if (freq[low] > 0)
        {
            ans2++;
            freq[low]--;
        }
    }

    cout << ans1 << " " << ans2 << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        fun();
    return 0;
}
