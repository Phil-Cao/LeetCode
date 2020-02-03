/*
 * @lc app=leetcode.cn id=65 lang=cpp
 *
 * [65] 有效数字
 */

// @lc code=start
class Solution {
public:
    bool isNumber(char const* s) {
        //字符串函数法（strtod()）
        char * ptr;
        strtod(s, &ptr);

        if(ptr == s){
            return false;
        }

        for(int i = 0; i < sizeof(ptr)/sizeof(ptr[0]); i++){
            if(!isspace(ptr[i])){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

