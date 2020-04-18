/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 */

// @lc code=start
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //动态规划：自顶向下 or 自底向上
        //自顶向下
        /*vector<vector<int>> dp(triangle);
        if(triangle.size() == 1){
            return triangle[0][0];
        }
        if(triangle.empty()){
            return 0;
        }
        dp[0][0] = triangle[0][0];
        dp[1][0] = dp[0][0] + triangle[1][0];
        dp[1][1] = dp[0][0] + triangle[1][1];

        for(int i = 2; i < triangle.size(); i++){
            for(int j = 0; j < triangle[i].size(); j++){
                if(j == 0){
                    dp[i][j] = dp[i - 1][j] + triangle[i][j];
                }else if(j == triangle[i].size() - 1){
                    dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
                }else{
                    dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1]) + triangle[i][j];
                }
            }
        }

        return *min_element(dp[triangle.size() - 1].begin(), dp[triangle.size() - 1].end());*/
        //自底向上，不用考虑边界
        vector<vector<int>> dp(triangle);
        for(int i = triangle.size() - 2; i >= 0; i--){
            for(int j = 0; j < triangle[i].size(); j++){
                dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]) + triangle[i][j];
            }
        }
        return dp[0][0];
    }
};
// @lc code=end

