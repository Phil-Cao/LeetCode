/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> combine(int n, int k) {
        if(n <= 0 || k <= 0 || k > n){
            return res;
        }
        vector<int> path;
        helper(n, k, 1, path);
        return res;
    }
    void helper(int n, int k, int start, vector<int> &path){
        if(path.size() == k){
            res.push_back(path);
            return;
        }
        for(int i = start; i <= n - (k - path.size()) + 1; i++){
            path.push_back(i);
            helper(n, k, i + 1, path);
            path.pop_back();
        }
    }
};
// @lc code=end

