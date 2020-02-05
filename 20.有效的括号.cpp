/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        string left = "({[";
        string right = ")}]";
        stack<char> stk;

        for(auto c : s){
            if(left.find(c) != s.npos){
                stk.push(c);
            }else{
                if(stk.empty() || stk.top() != left[right.find(c)]){
                    return false;
                }else{
                    stk.pop();
                }
            }
        }
        return stk.empty();
    }
};
// @lc code=end

