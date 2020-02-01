/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        int target = 0;
        for(int i=0; i < nums.size(); i++)
        {
            if(nums[i] != target)
            {
                nums[index++] = nums[i];
                //nums[i] = target;
            }
        }
        for(;index < nums.size(); index++)
        {
            nums[index] = 0;
        }
    }
};
// @lc code=end

