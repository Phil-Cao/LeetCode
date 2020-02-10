/*
 * @lc app=leetcode.cn id=106 lang=cpp
 *
 * [106] 从中序与后序遍历序列构造二叉树
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder, postorder, postorder.size() - 1, 0, inorder.size() - 1);
    }
    TreeNode * build(vector<int>& inorder, vector<int>& postorder, int postEnd, int inStart, int inEnd){
        if(inStart > inEnd){
            return nullptr;
        }
        int curVal = postorder[postEnd];
        TreeNode * cur = new TreeNode(curVal);
        int inIndex = 0; 
        for (int i = inStart; i <= inEnd; i++) {
            if (inorder[i] == curVal) {
                inIndex = i;
            }
        }
        cur -> left = build(inorder, postorder, postEnd - (inEnd- inIndex) - 1, inStart, inIndex - 1);
        cur -> right = build(inorder, postorder, postEnd - 1, inIndex + 1, inEnd);
        return cur;
    }
};
// @lc code=end

