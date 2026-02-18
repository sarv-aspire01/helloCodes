#include<bits/stdc++.h>
using namespace std;

void fun(){
  long long  int x , y ,k ,T;
    
cin>>x>>y>>k;

long double s= k+k*y-1;
T=ceil(s/(x-1))+k;
          cout<<T<<endl;
    }
    
    int main(){
      int t;      
    cin>>t;
    while(t--){fun();}
    return 0;

}