#include <bits/stdc++.h>
#include <vector>
#include <map>

using namespace std;
int main()
{

     int n;
    cin >> n;
    long long int a;
    cin >> a;
    map<int, int> rplce = {{0, 0}, {1, 0}, {2, 2}, {3, 3}, {4, 322}, {5, 5}, {6, 53}, {7, 7}, {8, 7222}, {9, 7332}};

    //   for (auto p : rplce)
    //      {
    //          cout << p.first << " --> " << p.second << '\n';
    //      }

    string s = to_string(a);
    string nwS;
    for (char c : s)
    {
        int digit = c - '0';
        int mapp = rplce.at(digit);
        nwS += to_string(mapp);
    }

    nwS.erase(remove(nwS.begin(), nwS.end(), '0'), nwS.end());

    sort(nwS.begin(), nwS.end(),greater<int>());

   // long long int result = stoi(nwS);
   // cout<<result<<'\n';

    cout << nwS<<'\n';

}
