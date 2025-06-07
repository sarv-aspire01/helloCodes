#include<bits/stdc++.h>
using namespace std;

void fun(){
   long long int n,x,k;
    cin>>n;
   for(int k=2;k<=1e8;k++){
int p = pow(2,k);
--p;
if (n%p==0){
    cout<<n/p<<endl;
    break;
}
   }

    }
    
    int main(){
     int t;      
    cin>>t;
    while(t--){fun();}
    return 0;

}