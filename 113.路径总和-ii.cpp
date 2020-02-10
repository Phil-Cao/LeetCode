/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector <int>> res;
        vector<int > temp;
        path(root, sum, temp, res);
        return res;
    }
private:
    void path(TreeNode * root, int sum, vector<int> &temp, vector<vector<int>> &res){
        if(root == nullptr){
            return;
        }
        temp.push_back(root -> val);
        if(root -> left == nullptr && root -> right == nullptr){
            if(sum == root -> val){
                res.push_back(temp);
            }
        }

        path(root -> left, sum - root -> val, temp, res);
        path(root -> right, sum - root -> val, temp, res);

        temp.pop_back();
    }
};
// @lc code=end

