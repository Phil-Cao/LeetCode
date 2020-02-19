/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> cur;
        dfs(s, cur, res);
        return res; 
    }
    bool isPalindrome(string s){
        return s == string(s.rbegin(), s.rend());
    }
    void dfs(string s, vector<string> &cur, vector<vector<string>> &res){
        if(s == ""){
            res.push_back(cur);
            return;
        }
        for(int i = 1; i <= s.length(); i++){
            string sub = s.substr(0, i);
            if(isPalindrome(sub)){
                cur.push_back(sub);
                dfs(s.substr(i, s.length() - 1), cur, res);
                cur.pop_back();
            }
        }
    }
};
// @lc code=end

