/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        size_t n = s.size();
        while(n > 0 && s[n - 1] == ' '){
            n--;
        }
        for(size_t i = 0; i < n; i++){
            if(s[i] != ' '){
                len++;
            }else if(s[i] && s[i] == ' '){
                len = 0;
            }
        }
        return len;
    }
};
// @lc code=end

