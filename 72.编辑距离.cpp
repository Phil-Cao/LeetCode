/*
 * @lc app=leetcode.cn id=72 lang=cpp
 *
 * [72] 编辑距离
 */

// @lc code=start
class Solution {
public:
    int minDistance(string word1, string word2) {
        int dp[word1.size() + 1][word2.size() + 1];
        int m = word1.size() + 1;
        int n = word2.size() + 1;
        for(int i = 0; i < m; i++){
            dp[i][0] = i;
        }
        for(int j = 0; j < n; j++){
            dp[0][j] = j;
        }
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(word1[i - 1] == word2[j - 1]){
                    dp[i][j] = dp[i -1][j -1];
                }else{
                    dp[i][j] = min(dp[i -1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};
// @lc code=end

