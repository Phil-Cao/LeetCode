/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int index=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[index-1])
            {
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};
// @lc code=end

