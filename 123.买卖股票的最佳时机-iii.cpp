/*
 * @lc app=leetcode.cn id=123 lang=cpp
 *
 * [123] 买卖股票的最佳时机 III
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2){
            return 0;
        }
        int n = prices.size();
        //f(i)表示【0，i】间的最大利润
        //g(i)表示【i，n-1】间的最大利润
        vector<int> f(n, 0);
        vector<int> g(n, 0);
        int valley = prices[0];
        int peek = prices[n - 1];

        for(int i = 1; i < n; i++){
            valley = min(valley, prices[i]);
            f[i] = max(f[i - 1], prices[i] - valley);
        }
        for(int i = n - 2; i >= 0; i--){
            peek = max(peek, prices[i]);
            g[i] = max(g[i + 1], peek - prices[i]);
        }
        int max_profit = 0;
        for(int i = 0; i < n; i++){
            max_profit = max(max_profit, f[i] + g[i]);
        }
        return max_profit;
    }
};
// @lc code=end

