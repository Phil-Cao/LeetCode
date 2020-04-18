/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int r = 0;
        while(x){
            int temp = x % 10;
            x = x / 10;
            if(r > INT_MAX/10 ||(r == INT_MAX / 10 && temp > 7)){
                return 0;
            }else if(r < INT_MIN / 10 ||(r == INT_MIN / 10 && temp < -8)){
                return 0;
            }else{
                r = r * 10 + temp;
            }
        }
        return r;
    }
};
// @lc code=end

