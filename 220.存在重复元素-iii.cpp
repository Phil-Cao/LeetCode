/*
 * @lc app=leetcode.cn id=220 lang=cpp
 *
 * [220] 存在重复元素 III
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        //滑动窗口+二叉搜索树
        set<int> record;
        for(int i = 0; i < nums.size(); i++){
            auto s = record.lower_bound((double)nums[i]-t);
            if(s != record.end() && *s <= (double)nums[i]+t){
                return true;
            }
            record.insert(nums[i]);
            if(record.size() == k+1){
                record.erase(nums[i-k]);
            }
        }
        return false;
    }
};
// @lc code=end

