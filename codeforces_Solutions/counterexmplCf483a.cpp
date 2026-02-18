#include <bits/stdc++.h>
using namespace std;
#include <string.h>

void fun()
{

    long long int l,r;
    cin>>l>>r;
     if (l % 2 != 0)
      l++;
   
  if (l + 2 > r)
    cout<<(-1);
  else
    cout<<l<<" "<<(l+1)<<" "<<(l+2);
}
int main()
{
    int t =1;
   // cin>>t;
    while (t--)
    {
        fun();
    }
    return 0;
}
