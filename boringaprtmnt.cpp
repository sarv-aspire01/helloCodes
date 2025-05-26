#include<iostream>
#include<string.h>
#include <bits/stdc++.h>

using namespace std;

void fun(){
int x,total=0;
cin>>x;
 
    for(int i=1;i<=9;i++){
        int sum=0;
        for(int j=1;j<=4;j++){
            sum =sum*10+i;
            total+=j;
            if(sum==x){
                cout<<total<<endl;
                    
            }
        }



    }


    }
    
    
    int main(){
      int t;      
    cin>>t;
    while(t--){fun();}
    return 0;

}