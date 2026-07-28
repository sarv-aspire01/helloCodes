//---------------------------------------
/* concepts
string, reverse sorting, sorting */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string smallestPalindrome(string s)
    {
        int n = s.size();
        int m= n/2;
        string res="";
        if (n==1){return s;}
        

        if (n%2==0 ){
            string str1= s.substr(0,m);
            sort(str1.begin(),str1.end());
            string str2=str1;
            reverse(str2.begin(),str2.end());
            
            res.append(str1);
            res.append(str2);
        }else{
            char mid =s[m];

            string str1=s.substr(0,m);
            sort(str1.begin(),str1.end());
            string str2=str1;
            reverse(str2.begin(),str2.end());
           
            

            res.append(str1);
            res+=mid;
            res.append(str2);


        }

        return res;
    }
};

int main()
{ // test main function
    Solution s1;
    string s="babab";
    string res = s1.smallestPalindrome(s);

    cout << res << '\n';
    return 0;
}