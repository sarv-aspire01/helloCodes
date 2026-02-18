#include<bits/stdc++.h>


using namespace std;

   
    int main(){
     long long int a,b,c,n;
 
    cin>>a>>b>>c;
  n = 2*c+min(a,b)+min(max(a,b),min(a,b)+1);
        cout<<n<<endl;

    return 0;
  }
   