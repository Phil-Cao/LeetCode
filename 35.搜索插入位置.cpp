/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res = nums.size();
        if(nums.size() == 0){
            return 0;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= target){
                res = i;
                break;
            }
        }
        return res;
    }
};
// @lc code=end

