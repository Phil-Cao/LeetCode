/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> my_map;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            my_map[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            auto iter = my_map.find(target-nums[i]);
            if(iter != my_map.end()&&iter->second > i)
            {
                result.push_back(i);
                result.push_back(iter->second);
                break;
            }
        }
        return result;
    }
};
// @lc code=end

