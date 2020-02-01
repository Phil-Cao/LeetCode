/*
 * @lc app=leetcode.cn id=330 lang=cpp
 *
 * [330] 按要求补齐数组
 */

// @lc code=start
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int[] res = new int[n];
        int k = 1;
        for(int i = 0; i < n; i++){
            res[i] = k;
            k = k * nums[i];
        }
        k = 1;
        for(int i = n-1; i >= 0; i--){
            res[i] = res[i] * k;
            k = k * nums[i];
        }
        return res;
    }
};
// @lc code=end

