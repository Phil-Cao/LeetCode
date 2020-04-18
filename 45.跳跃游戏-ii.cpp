/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int end = 0;
        int max_bound = 0;
        int step = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            max_bound = max(max_bound, i + nums[i]);
            if(i == end){
                step++;
                end = max_bound;
            }
        }
        return step;
    }
};
// @lc code=end

