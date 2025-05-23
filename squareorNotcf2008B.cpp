#include <bits/stdc++.h>
using namespace std;

void fun()
{   int n;
    cin>>n;
    string s;
    cin>>s;
    bool square = false;
   
int elmnt=0;
while(elmnt<n && s[elmnt]=='1'){
    elmnt++;
}
if(elmnt==n){

    if(n==4){
        square=true;
    }
}
else{
    if((elmnt-1)*(elmnt-1)==n){
        square=true;
    }
}

    if (square) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        fun();
    }
    return 0;
}