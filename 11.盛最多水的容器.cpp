/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int end = height.size() - 1;
        int start = 0;
        int max_area = 0;
        while(start < end){
            max_area = max(min(height[start], height[end]) * (end - start), max_area);
            if(height[end] >= height[start]){
                start++;
            }else{
                end--;
            }
        }
        return max_area;
    }
};
// @lc code=end

