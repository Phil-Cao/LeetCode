/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }

        stack<TreeNode *> s;
        s.push(root -> left);
        s.push(root -> right);

        while(!s.empty()){
            auto p = s.top();
            s.pop();
            auto q = s.top();
            s.pop();

            if(!p && !q){
                continue;
            }
            if(!p || !q){
                return false;
            }
            if(p -> val != q -> val){
                return false;
            }

            s.push(p -> left);
            s.push(q -> right);

            s.push(p -> right);
            s.push(q -> left);
        }
        return true;
    }
};
// @lc code=end

