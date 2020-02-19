/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        set<vector<int>> res;
        vector<vector<int>> real_res;
        vector<int> cur;
        dfs(candidates, target, 0, cur, res);
        copy(res.begin(), res.end(), back_inserter(real_res));
        return real_res;
    }
        void dfs(vector<int>& nums, int target, int start, vector<int> &cur, set<vector<int>> &res){
        if(target == 0){
            res.insert(cur);
            return;
        }

        for(int i = start; i < nums.size(); i++){
            if(target < nums[i]){
                return;
            }
            cur.push_back(nums[i]);
            dfs(nums, target - nums[i], i + 1, cur, res);
            cur.pop_back();
        }
    }
};
// @lc code=end

