#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int> > res;
        int nums_len = nums.size();

        if (nums_len < 3) {
            return res;
        }

        int sum = 0, l = 0, r = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums_len; ++i) {
            // if (nums[i] > target) {  // 注意：这里不能跳过，因为可能有负数 target
            //     break;
            // }

            if (i > 0 && nums[i] == nums[i - 1]) {
                    continue;
            }

            for (int j = i + 1; j < nums_len; ++j) {
                // if (nums[j] > target - nums[i]) {    // 注意：这里不能跳过，因为可能有负数 target
                //     break;
                // }

                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int l = j + 1;
                int r = nums_len - 1;

                while (l < r) {
                    sum = nums[i] + nums[j] + nums[l] + nums[r];
                    if (sum == target) {
                        res.push_back(vector<int> {nums[i], nums[j], nums[l], nums[r]});
                        while (l < r && nums[l] == nums[l + 1]) {
                            ++l;
                        }
                        while (l < r && nums[r] == nums[r - 1]) {
                            --r;
                        }
                        ++l;
                        --r;
                    } else if (sum < target) {
                        ++l;
                    } else {
                        --r;
                    }
                }
            }
        }

        return res;
    }
};


int main() {
    Solution s;
    vector<int> nums =  {1, 0, -1, 0, -2, 2};
    s.fourSum(nums, 0);
}