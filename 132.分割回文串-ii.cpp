/*
 * @lc app=leetcode.cn id=132 lang=cpp
 *
 * [132] 分割回文串 II
 */

// @lc code=start
class Solution {
public:
    int minCut(string s) {
        int len = s.size();
        if(len < 2){
            return 0;
        }
        int dp[len];
        for(int i = 0; i < s.size(); i++){
            dp[i] = i;
        }
        for(int i = 1; i < len; i++){
            if(isPalindrome(s, 0, i)){
                dp[i] = 0;
                continue;
            }
            for(int j = 0; j < i; j++){
                if(isPalindrome(s, j + 1, i)){
                    dp[i] = min(dp[i], dp[j] + 1);
                }
            }
        }
        return dp[len - 1];
    }
    bool isPalindrome(string s, int left, int right){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
// @lc code=end

