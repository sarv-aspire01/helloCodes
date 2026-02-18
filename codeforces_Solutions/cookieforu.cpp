#include<bits/stdc++.h>
using namespace std;

void fun(){
   long long int a,b,n,m,c ;
    cin>>a>>b>>n>>m;
    if(a>b){
 c = a;
a=b;
b=c;}
        if(m<=min(a,b) && n+m<=a+b){
cout<<"Yes"<<endl;}
else {cout<<"No"<<endl;}

          
    }
    
    int main(){
     int t;      
    cin>>t;
    while(t--){fun();}
    return 0;

}