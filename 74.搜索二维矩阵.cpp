/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()){
            return false;
        }
        const size_t m = matrix.size();
        const size_t n = matrix.front().size();
        int first = 0;
        int last = m * n;
        while(first < last){
            int mid = first + (last - first)/2;
            int val = matrix[mid / n][mid % n];
            if(val == target){
                return true;
            }else if(val < target){
                first = mid + 1;
            }else{
                last = mid;
            }
        }
        return false;
    }
};
// @lc code=end

