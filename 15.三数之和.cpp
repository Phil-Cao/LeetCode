/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()<3)
            return result;
        sort(nums.begin(), nums.end());
        const int target = 0;
        auto last = nums.end();

        for(auto i = nums.begin(); i < last-2; i++)
        {
            if(i > nums.begin() && *i == *(i-1))
                continue;
            auto j = i+1;
            auto k = last-1;
            while(j < k)
            {
                if(*i + *k + *j < target)
                {
                    j++;
                    while(*j == *(j-1) && j < k)
                        j++;
                }
                else if(*i + *k + *j > target)
                {
                    k--;
                    while(*k == *(k+1) && j < k)
                        k--;
                }
                else
                {
                    result.push_back({*i, *j, *k});
                    k--;
                    j++;
                    while(*j == *(j-1) && j < k)
                        j++;
                    while(*k == *(k+1) && j < k)
                        k--;
                }
                
            }
        }
        return result;
    }
};
// @lc code=end

