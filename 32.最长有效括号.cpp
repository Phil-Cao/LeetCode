/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 */

// @lc code=start
class Solution {
public:
    int longestValidParentheses(string s) {
        int max_len = 0;
        stack<int> map;
        map.push(-1);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                map.push(i);
            }else{
                map.pop();
                if(map.empty()){
                    map.push(i);
                }else{
                    max_len = max(max_len, i - map.top());
                }
            }
        }
        return max_len;
    }
};
// @lc code=end

