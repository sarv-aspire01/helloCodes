#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin>>n;
   vector< int >arr(n);

    
    for (int i = 0; i < n; i++)
    {    

        cin >> arr[i];

    
    }

sort(arr.begin(),arr.end());

int curr=1;


 for (int i = 0; i < n; i++)
    {    

       

        if (arr[i]>=curr)
        {
            curr++;
        }
    }
    

        cout << curr << '\n';

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