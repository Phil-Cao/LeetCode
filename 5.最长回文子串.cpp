/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty() || s.length() == 0) {
            return "";
        }
        const int n = s.size();
        /*bool f[n][n];
        fill_n(&f[0][0], n*n, false);*/
        //使用vector会超时
        vector<vector<bool> > f(n , vector<bool>(n, false));
        size_t max_len = 1;
        size_t start = 0;

        for(int i = 0; i < s.size(); i++){
            f[i][i] = true;
            for(int j = 0; j < i; j++){
                f[j][i] = (s[j] == s[i] && (i - j < 2 || f[j+1][i-1]));
                if (f[j][i] && max_len < (i-j+1)){
                    max_len = i - j + 1;
                    start = j;
                }
            }
        }
        return s.substr(start, max_len);
    }
};
// @lc code=end

