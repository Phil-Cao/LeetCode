/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int map(char c){
        switch(c){
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return 0;
        }
    }
    int romanToInt(string s) {
        int res = 0;
        for(size_t i = 0; i < s.size(); i++){
            if(i > 0 && map(s[i]) > map(s[i-1])){
                res = res + (map(s[i]) - 2*(map(s[i-1])));
            }else{
                res = res + map(s[i]);
            }
        }
        return res;
    }
};
// @lc code=end

