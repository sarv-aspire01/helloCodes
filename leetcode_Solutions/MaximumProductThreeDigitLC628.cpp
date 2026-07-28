//---------------------------------------
/* concepts
string, reverse sorting, sorting */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();

        sort(nums.begin(), nums.end());
     
        int ans = max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);
        return ans;
    }
};

int main()
{ // test main function
    Solution s1;
    vector<int> arr = {-100, -2, 3,1};
    int res = s1.maxProduct(arr);

    cout << res << '\n';
    return 0;
}