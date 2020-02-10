/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    bool isValidBST(TreeNode* root) {
        return vaild(root, LLONG_MIN, LLONG_MAX);
    }
    bool vaild(TreeNode * root, double lower, double upper){
        if(root == nullptr){
            return true;
        }

        return root -> val > lower && root -> val < upper
                && vaild(root -> left, lower, root -> val)
                && vaild(root -> right, root -> val, upper);
    }
};
// @lc code=end

