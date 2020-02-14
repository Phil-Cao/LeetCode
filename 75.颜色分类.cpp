/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3] = {0};
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        int idx = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < count[i]; j++){
                nums[idx++] = i;
            }
        }
    }
};
// @lc code=end

