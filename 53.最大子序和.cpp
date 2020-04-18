/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*vector<int> dp(nums);
        for(int i = 1; i < nums.size(); i++){
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
        }
        return *max_element(dp.begin(), dp.end());*/
        //精简版
        int res = nums[0];
        int dp = nums[0];
        for(int i = 1; i < nums.size(); i++){
            dp = max(dp + nums[i], nums[i]);
            res = max(dp, res);
        }
        return res;
    }
};
// @lc code=end

