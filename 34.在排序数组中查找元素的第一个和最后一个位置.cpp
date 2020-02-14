/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       /* const int l = distance(nums.begin(), lower_bound(nums.begin(), nums.end(), target));
        const int r = distance(nums.begin(), --upper_bound(nums.begin(),nums.end(),target));
        if(nums[l] != target){
            return vector<int> {-1, -1};
        }else{
            return vector<int> {l, r};
        }*/
        //前序倒序双扫描法
        vector<int> res = {-1, -1};
        //int flag = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                res.clear();
                res.push_back(i);
                break;
            }
        }
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] == target){
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};
// @lc code=end

