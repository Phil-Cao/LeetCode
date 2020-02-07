/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    vector<int> res;
public:
    vector<int> postorderTraversal(TreeNode* root) {
        //递归
        /*TreeNode * p = root;
        if(root == nullptr){
            return res;
        }
        if(p -> left != nullptr) postorderTraversal(p -> left);
        if(p -> right != nullptr) postorderTraversal(p -> right);
        res.push_back(p -> val);
        return res;*/
        vector<int> res;
        TreeNode *p, *q;
        stack<TreeNode *> s;
        p = root;

        do{
            while(p != nullptr){
                s.push(p);
                p = p -> left;
            }
            q = nullptr;
            while(!s.empty()){
                p = s.top();
                s.pop();
                if(p -> right == q){
                    res.push_back(p -> val);
                    q = p;
                }else{
                    s.push(p);
                    p = p -> right;
                    break;
                }
            }
        }while(!s.empty());

        return res;
    }
};
// @lc code=end

