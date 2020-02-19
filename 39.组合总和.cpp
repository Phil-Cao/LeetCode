/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> cur;
        dfs(candidates, target, 0, cur, res);
        return res;
    }
    void dfs(vector<int>& nums, int target, int start, vector<int> &cur, vector<vector<int>> &res){
        if(target == 0){
            res.push_back(cur);
            return;
        }

        for(int i = start; i < nums.size(); i++){
            if(target < nums[i]){
                return;
            }
            cur.push_back(nums[i]);
            dfs(nums, target - nums[i], i, cur, res);
            cur.pop_back();
        }
    }
};
// @lc code=end

