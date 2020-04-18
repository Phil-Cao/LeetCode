/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0 ){
            return false;
        }
        int d = 1;
        while(x / d >= 10) d = d * 10;
        while( x > 0 ){
            int q = x / d;
            int r = x % 10;
            if( q != r ){
                return false;
            }
            x = (x % d) / 10;
            d = d / 100;
        }
        return true;
    }
};
// @lc code=end

