#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        int nums_len = nums.size();
        if (nums_len < 3) {
            return res;
        }
        sort(nums.begin(), nums.end());
        int sum = 0, l = 0, r = 0;

        for (int i = 0; i < nums_len; ++i) {
            if (nums[i] > 0) {  // 情况1
                break;
            }
            if (i > 0 && nums[i] == nums[i - 1]) {  // 情况2
                continue;
            }

            l = i + 1;
            r = nums_len - 1;

            while (l < r) {
                sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    res.push_back(vector<int> {nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l + 1]) {   // 情况3
                        ++l;
                    }
                    while (l < r && nums[r] == nums[r -1]) {    // 情况4
                        --r;
                    }
                    ++l;
                    --r;
                } else if (sum > 0) {
                    --r;
                } else {
                    ++l;
                }
            }
        }

        return res;
    }
};


int main() {
    Solution s;
    vector<int> nums =  {-1,0,1,2,-1,-4};
    s.threeSum(nums);
}