//---------------------------------------
/* concepts 
string, reverse sorting, sorting */


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(int n){
        string str = to_string(n);
        sort(str.begin(),str.end(), greater<char>());

        
        
        int a= str[0]-'0';
        int b= str[1]-'0';

        return a*b;

    }


};

int main(){ //test main function
    Solution s1;

    int res = s1.maxProduct(124);

cout<<res<<'\n';
return 0;

}