
//---------------------------------

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int size = sizeof(nums) / sizeof(nums[0]);
        int x;
        for (int i = 0; i < size; i++) {
            x = target - nums[i];
            for (int j = 0; j < size; j++) {
                if (nums[j] == x && j != i) {
                    res.push_back(i);
                    res.push_back(j);
                    
                    return res;
                }
            }
        }
        return res;
    }
};


//----------------------------main fun for Local testing---------------------------
int main()
{
    vector<int> nums = {1,2,3,4,5};
    Solution s1;

vector<int> result = s1.twoSum(nums, 9);
    

    if(result.empty()) {
        cout << "Not found" << endl;
    } else {
      
        for (int indx : result) {
            cout << indx << " ";
        }
        cout << '\n';
    }
    
    return 0;
}
