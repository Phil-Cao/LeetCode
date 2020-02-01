/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0)
            return 0;
        int i = 0;
       //int j = 0;
        for(;haystack[i];i++){
            int j = 0;
            int i_new = i;
            while(haystack[i_new] && needle[j] && haystack[i_new] == needle[j]){
                j++;
                i_new++;
            }
            if(!needle[j]){
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

