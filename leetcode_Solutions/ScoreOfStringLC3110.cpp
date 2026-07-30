//---------------------------------------
/* concepts
string, reverse sorting, sorting */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int stringScore(string s)
    {
        int n = s.size();
        int res=0;
        for (int i=0;i<n-1;i++){
            
            
            res+=abs(s[i]-s[i+1]);
            
        
        }
        

        

        return res;
    }
};

int main()
{ // test main function
    Solution s1;
    string s="hello";
    int res = s1.stringScore(s);

    cout << res << '\n';
   
    return 0;
}