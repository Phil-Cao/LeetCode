/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string str) {
        int res = 0;
        int i = 0;
        int sign = 1;
        // 1. 检查空格
        while (str[i] == ' ') { i++; }
        // 2. 检查符号
        if (str[i] == '-') { 
            sign = -1; i++;
        }else if (str[i] == '+') { i++; }
        // 3. 计算数字
        while (i < str.size() && isdigit(str[i])) {
            int r = str[i] - '0';
            // ------ 4. 处理溢出，这是关键步骤 ------
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && r > 7)) { 
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            // ------------------------------------
            res = res * 10 + r;
            i++;
        }
        return res * sign;
    }
};
// @lc code=end

