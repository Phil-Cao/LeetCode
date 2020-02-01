/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {//通项公式法,组合数学
public:
    int climbStairs(int n) {
        const double s = sqrt(5);
        return floor((pow((1+s)/2, n+1) - pow((1-s)/2, n+1))/s + 0.5);
    }
};
// @lc code=end

