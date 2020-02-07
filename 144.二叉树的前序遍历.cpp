/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    vector<int> preorderTraversal(TreeNode* root) {
        /*vector<int> res;
        TreeNode *p ;//= root;
        stack<TreeNode *> s;

        p = root;
        if(p != nullptr){
            s.push(p);
        }

        while(!s.empty()) /*|| p != nullptr)*/
        vector<int> res;
        stack<TreeNode *> s;
        TreeNode * p = root;
        if(p != nullptr){
            s.push(p);
        }

        while(!s.empty()){
            p = s.top();
            s.pop();
            res.push_back(p->val);
            if(p -> right != nullptr){
                s.push(p -> right);
            }
            if(p -> left != nullptr){
                s.push(p -> left);
            }
        }
        return res;
    }
};
// @lc code=end

