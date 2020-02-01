/*
 * @lc app=leetcode.cn id=62 lang=cpp
 *
 * [62] 不同路径
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m < 0 || n < 0){
            return 0;
        }
        int dp[m][n] = {0};
        for(int i = 0; i < m ; i++){
            dp[i][0] = 1;
        }
        for(int j = 0; j < n ; j++){
            dp[0][j] = 1;
        }
        // 推导出 dp[m-1][n-1]
        for (int k = 1; k < m; k++) {
            for (int l = 1; l < n; l++) {
                dp[k][l] = dp[k-1][l] + dp[k][l-1];
            }
        }
        return dp[m-1][n-1];
    }
};
// @lc code=end

