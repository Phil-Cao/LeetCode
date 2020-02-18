/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {
public:
    const vector<string> keyboard{" ", "",
        "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string cur_path;
        if(digits.empty()){
            //vector<int> zero_res;
            return res;
        }
        dfs(digits, 0, cur_path, res);
        return res;
    }
    void dfs(string &digits, int size, string cur_path, vector<string> &res){
        if(size == digits.size()){
            res.push_back(cur_path);
            return;
        }
        for(auto c : keyboard[digits[size] - '0']){
            dfs(digits, size + 1, cur_path + c, res);
        }
    }
};
// @lc code=end

