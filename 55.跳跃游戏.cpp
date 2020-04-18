/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last_pos = nums.size() - 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            if(i + nums[i] >= last_pos){
                last_pos = i;
            }
        }
        return last_pos == 0;
    }
};
// @lc code=end

