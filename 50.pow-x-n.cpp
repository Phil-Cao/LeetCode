/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0){
            return 1;
        }
        if(n == 1){
            return x;
        }
        if(n == -1){
            return 1 / x;
        }
        double half = myPow(x, n / 2);
        double end = myPow(x, n % 2);
        return end * half * half;
    }
};
// @lc code=end

