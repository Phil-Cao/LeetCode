/*
 * @lc app=leetcode.cn id=44 lang=cpp
 *
 * [44] 通配符匹配
 */

// @lc code=start
class Solution {
public:
    bool isMatch(string s, string p) {
        int i_start=-1, j_start = -1;
        int i = 0, j = 0;
        int n = s.size(), m = p.size();
        while(i < n){
            if(j != m && (s[i] == p[j] || p[j] == '?')){
                ++i;
                ++j;
            }else if(j != m && p[j] == '*'){
                i_start = i + 1;
                j_start = ++j;
            }else if(j_start >= 0){
                i = i_start++;
                j = j_start;
            }else{
                return false;
            }
        }
        while(j < p.size() && p[j] == '*'){
            ++j;
        }
        return j == p.size();
    }
};
// @lc code=end

