/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> res;
        unsigned int map = 0;
        vector<int> temp;
        int end = 1 << size;
        while(map < end){
            for(int i = 0; i < size; i++){
                if((1 << i) & map){
                    temp.push_back(nums[i]);
                }
            }
            res.push_back(temp);
            temp.clear();
            map++;
        }
        return res;
    }
};
// @lc code=end

