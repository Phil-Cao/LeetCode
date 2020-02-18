/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        set<vector<int>> res;//set可以去重
        unsigned int map = 0;
        vector<int> temp;
        int end = 1 << size;
        while(map < end){
            for(int i = 0; i < size; i++){
                if((1 << i) & map){
                    temp.push_back(nums[i]);
                }
            }
            res.insert(temp);
            temp.clear();
            map++;
        }
        vector<vector<int>> real_res;
        copy(res.begin(), res.end(), back_inserter(real_res));
        return real_res;
    }
};
// @lc code=end

