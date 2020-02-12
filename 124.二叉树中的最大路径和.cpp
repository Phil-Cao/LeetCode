/*
 * @lc app=leetcode.cn id=124 lang=cpp
 *
 * [124] 二叉树中的最大路径和
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
    int maxPathSum(TreeNode* root) {
        int val = INT_MIN;
        maxSum(root, val);
        return val;
    }
    int maxSum(TreeNode * root , int &val){
        if(root == nullptr){
            return 0;
        }
        int left = maxSum(root -> left, val);
        int right = maxSum(root -> right, val);
        int lmr = root -> val + max(0, left) + max(0,right);
        int ret = root -> val + max(0, max(left, right));
        val = max(val, max(lmr, ret));
        return ret;
    }
};
// @lc code=end

