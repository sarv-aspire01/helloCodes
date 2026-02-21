#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> R_Num = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i + 1 < s.length())
        {
            char curr = s[i];
            char nxt = s[i + 1];

            if (curr == 'I' && nxt == 'V')
            {
                sum += 4;
                i++;
                continue;
            }
            else if (curr == 'I' && nxt == 'X')
            {
                sum += 9;
                i++;
                continue;
            }
            else if (curr == 'X' && nxt == 'L')
            {
                sum += 40;
                i++;
                continue;
            }
            else if (curr == 'X' && nxt == 'C')
            {
                sum += 90;
                i++;
                continue;
            }
            else if (curr == 'C' && nxt == 'D')
            {
                sum += 400;
                i++;
                continue;
            }
            else if (curr == 'C' && nxt == 'M')
            {
                sum += 900;
                i++;
                continue;
            }

           
        }

        if(R_Num.count(s[i])){
            sum += R_Num[s[i]];
        }
    }
    return sum;
}

int main()
{
    string s;
    cin >> s;

    int n = romanToInt(s);
    cout << n << '\n';
}