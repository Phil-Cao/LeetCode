/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层次遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        //注意：返回值的类型是vector<vector<int>>
        vector<vector<int>> res;
        if(root == nullptr){
            return res;
        }

        vector<int> level;//当前层的情况
        queue<TreeNode *> cur, next;//由于返回值类型的问题，我们每遍历完一层之后需要跳出循环一次，所以需要两个队列

        cur.push(root);
        while(!cur.empty()){
            while(!cur.empty()){
                TreeNode * temp = cur.front();
                cur.pop();
                level.push_back(temp -> val);
                if(temp -> left != nullptr){
                    next.push(temp -> left);
                }
                if(temp -> right != nullptr){
                    next.push(temp -> right);
                }
            }
            res.push_back(level);
            level.clear();
            swap(cur, next);
        }
        return res;
    }
};
// @lc code=end

