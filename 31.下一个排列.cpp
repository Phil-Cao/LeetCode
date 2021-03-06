/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_p(nums, 0, nums.size());
    }
private:
    bool next_p(vector<int> &nums, int begin, int end){
        int p = end-2;
        while(p > -1 && nums[p] >= nums[p+1]) --p;

        if(p == -1){
            reverse(&nums[begin], &nums[end]);//321的下一个是123
            return false;
        }

        int c = end - 1;
        while(c > 0 && nums[c] <= nums[p]){
            c--;
        }

        swap(nums[p],nums[c]);
        reverse(&nums[p+1], &nums[end]);
        return true;
    }
};
// @lc code=end

