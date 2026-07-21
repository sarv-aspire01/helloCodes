
//---------------------------------

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
      /*   vector<int> res;
        string str = "";
        for (int i : digits)
        {
            str += to_string(i);
        }
        long long num = stoll(str);
        num += 1;
        str = to_string(num);
        for (char c : str)
        {
            res.push_back(c - '0');
        }
        return res; 
        
        didn't worked as digits length was 100 and long long can handle only upto 19 digits*/


        // Find the first digit from the right that is NOT a 9
        auto it = find_if_not(digits.rbegin(), digits.rend(), [](int d)
                              { return d == 9; });
        // Turn all the trailing 9s into 0s
        fill(digits.rbegin(), it, 0);
        // Increment that non-9 digit, or add a 1 at the front if it was all 9s
        if (it != digits.rend())
        {
            (*it)++;
        }
        else
        {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};

//----------------------------main fun for Local testing---------------------------
int main()
{
    vector<int> nums = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    Solution s1;

    vector<int> result = s1.plusOne(nums);

    if (result.empty())
    {
        cout << "Not found" << endl;
    }
    else
    {

        for (int indx : result)
        {
            cout << indx << " ";
        }
        cout << '\n';
    }

    return 0;
}
