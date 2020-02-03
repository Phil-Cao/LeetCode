/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 报数
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        string str,res;
        res = "1";
        for(int i = 1; i < n; i++){
            str = res;
            res = "";
            for(int j = 0; j < str.size();){
                int c = 0; 
                int k = j;
                while(k < str.size() && str[k] == str[j]){
                    c++;
                    k++;
                }
                res = res + to_string(c) + str[j];
                j = k;
            }
        }
        return res;
    }
};
// @lc code=end

