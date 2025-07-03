#include <bits/stdc++.h>

using namespace std;


int cntDistinct(string str){
   set<char> uniqueChars;

    for (char ch : str) {
        if(isalpha(ch)){uniqueChars.insert(ch);}
    }
    return uniqueChars.size();
}
int main()
{

    string str;

    getline(cin, str);
    int ans = cntDistinct( str);
    cout << ans << endl;

    return 0;
}
