/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;

        for(int i = 0; i < nums.size(); i++){
            if(hashmap.find(nums[i]) != hashmap.end()){
                if(i - hashmap[nums[i]] <= k)
                    return true;
                else{
                    hashmap[nums[i]] = i;
                }
            }else{
                hashmap[nums[i]] = i;
            }
        }
        return false;
    }
};
// @lc code=end

