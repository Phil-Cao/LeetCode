/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*bool flag = false;//排序查重法
         if(nums.size()<2){
             return false;
         }      
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                flag = true;
                break;
            }
        }
        return flag;*/
        //哈希表法
        unordered_set<int> values;
        for(auto i : nums){
            values.insert(i);
        }
        return nums.size() != values.size();
    }
};
// @lc code=end

