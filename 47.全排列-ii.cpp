/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        do{
            res.push_back(nums);
        }while(next_per(nums, 0, nums.size()));

        return res;
    }
    bool next_per(vector<int> &nums, int begin, int end){
        int p = end-2;
        while(p > -1 && nums[p] >= nums[p+1]) --p;

        if(p == -1){
            //reverse(&nums[begin], &nums[end]);
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

