/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0){
            return nullptr;
        }
        return sortArray(nums, 0, nums.size() - 1);
    }
    TreeNode * sortArray(vector<int>& nums, int start, int end){
        if(start > end){
            return nullptr;
        }
        int mid = start + (end - start) / 2;
        TreeNode * root = new TreeNode(nums[mid]);
        root -> left = sortArray(nums, start, mid -1);
        root -> right = sortArray(nums, mid + 1, end);
        return root;
    }
};
// @lc code=end

