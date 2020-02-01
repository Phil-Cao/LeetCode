/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        const int n = height.size();
        int *left_peak = new int[n]();
        int *right_peak = new int[n]();

        for(int i = 1; i < n; i++){
            left_peak[i] = max(height[i-1], left_peak[i-1]);
        }

        for(int i = n-2; i >= 0; --i){
            right_peak[i] = max(height[i+1], right_peak[i+1]);
        }

        int sum = 0;
        for(int i = 0; i < n; i++){
            int h = min(left_peak[i], right_peak[i]);
            if(h > height[i]){
                sum = sum + h - height[i];
            }
        }

        delete[] left_peak;
        delete[] right_peak;
        return sum;
    }
};
// @lc code=end

