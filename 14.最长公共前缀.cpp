/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        for(int idx = 0; idx < strs[0].size(); idx++){
            for(int i = 1; i < strs.size(); i++){
                if(strs[i][idx] != strs[0][idx]){
                    return strs[0].substr(0, idx);
                }
            }
        }
        return strs[0];
    }
};
// @lc code=end

