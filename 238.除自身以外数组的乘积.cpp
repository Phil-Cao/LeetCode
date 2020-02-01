/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        int left = 1, right = 1;

        for(int i = 0; i < n; i++){
            res[i] = res[i] * left;
            left = left * nums[i];

            res[n-1-i] = res[n-1-i] * right;
            right = right * nums[n-i-1];
        }

        return res;
    }
};
// @lc code=end

