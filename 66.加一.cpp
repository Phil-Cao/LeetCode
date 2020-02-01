/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        add(digits, 1);
        return digits;
    }

private:
    void add(vector<int> & digits, int digit){
        int c = digit;//进位标识

        for(auto it = digits.rbegin(); it != digits.rend(); it++){//倒序遍历
            *it = *it + c;
            c = *it/10;
            *it = *it % 10;
        }

        if(c > 0){
            digits.insert(digits.begin(), 1);
        }
    }
};
// @lc code=end

