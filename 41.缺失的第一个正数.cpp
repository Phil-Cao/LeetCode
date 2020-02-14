/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //容斥原理
        int n = nums.size();
        if(n == 0){
            return 1;
        }
        int *res = new int[n];
        for(int i = 0; i < n; i++){
            if(nums[i] - 1 >= n || nums[i] <= 0){
                continue;
            }
            res[nums[i] - 1] = nums[i];
        }
        for(int i = 0; i < n; i++){
            if(res[i] != i + 1){
                return i + 1;
            }
        }
        return n + 1;
    }
};
// @lc code=end

