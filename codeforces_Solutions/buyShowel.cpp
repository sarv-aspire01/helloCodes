#include<bits/stdc++.h>


using namespace std;

   
    int main(){
     int k,r,x;
   
    cin>>k>>r;
 
    for (x=1;x<=1000;x++){
        if (k*x%10==r || k*x%10==0 ){
          cout<<x<<endl;
        break;
        }
    }


    return 0;
    }