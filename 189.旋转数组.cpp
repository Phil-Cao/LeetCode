/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        const int n = nums.size();
        k = k % n;
        reverse(nums, n - k, n - 1);
        reverse(nums, 0, n - k - 1);
        reverse(nums, 0, n - 1);
    }
public:
    void reverse(vector<int>& nums, int m, int n){
        for(int i = m, j = n; i < j; i++, j--){
            swap(nums[i], nums[j]);
        }
    } 
};
// @lc code=end

