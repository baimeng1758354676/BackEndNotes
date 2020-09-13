#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string t) {
        unordered_map<char, int> need, window;
        for (char c : t) need[c]++;

        int left = 0, right = 0;
        int valid = 0;  // 记录条件
        int s_len = s.size(), t_len = t.size(), need_len = need.size();
        vector<int> res; // 记录结果

        while (right < s_len) {
            char c = s[right];
            right++;

            // 进行窗口内数据的一系列更新
            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c])
                    valid++;
            }

            // 判断左侧窗口是否要收缩
            while (right - left >= t_len) {
                // 当窗口符合条件时，把起始索引加入 res
                if (valid == need_len)
                    res.push_back(left);

                char d = s[left];
                left++;

                // 进行窗口内数据的一系列更新
                if (need.count(d)) {
                    if (window[d] == need[d])
                        valid--;
                    window[d]--;
                }
            }
        }

        return res;
    }
};


int main() {

    string s("acdcaeccde"), p("c");

    auto solution = new Solution;

    vector<int> res = solution->findAnagrams(s, p);
    for (auto r : res)
        std::cout << r << endl;
}