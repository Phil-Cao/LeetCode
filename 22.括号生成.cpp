/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(n > 0){
            generate(n, "", 0, 0, res);
        }
        return res;
    }
    //l表示（出现的次数，r表示）出现的次数
    void generate(int n, string s, int l, int r, vector<string> &res){
        if(l == n){
            res.push_back(s.append(n - r, ')'));
            return;
        }
        generate(n, s + '(', l + 1, r, res);
        if(l > r){
            generate(n, s + ')', l, r + 1, res);
        }
    }
};
// @lc code=end

