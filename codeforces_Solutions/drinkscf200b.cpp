#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
void fun()
{

    int n;
   cin>>n;
   long double arr[n];
   long double tmp=0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    tmp+=(arr[i]);

   }

//cout<<setprecision(numeric_limits<double>::digits10+1);
 cout << fixed;
    cout << setprecision(10);
cout<<tmp/n;

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