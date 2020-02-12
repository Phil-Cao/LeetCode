/*
 * @lc app=leetcode.cn id=129 lang=cpp
 *
 * [129] 求根到叶子节点数字之和
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
    int sumNumbers(TreeNode* root) {
        return compute(root , 0);
    }
private:
    int compute(TreeNode * root, int sum){
        if(root == nullptr){
            return 0;
        }
        if(root -> left == nullptr && root -> right == nullptr)//is leaf
        {
            return sum * 10 + root -> val;
        }
        return compute(root -> left, sum * 10 + root -> val) + compute(root -> right, sum * 10 + root -> val);
    }
};
// @lc code=end

