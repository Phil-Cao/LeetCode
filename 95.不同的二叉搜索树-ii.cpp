/*
 * @lc app=leetcode.cn id=95 lang=cpp
 *
 * [95] 不同的二叉搜索树 II
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
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode *> zeroTree;
        if(n == 0){
            return zeroTree;
        }
        return generate(1, n);
    }
private:
    vector<TreeNode *> generate(int start, int end){
        vector<TreeNode *> subTree;
        if(start > end){
            subTree.push_back(nullptr);
            return subTree;
        }
        for(int k = start; k <= end; k++){
            vector<TreeNode *> leftsub = generate(start, k - 1);
            vector<TreeNode *> rightsub = generate(k + 1, end);
            for(auto i : leftsub){
                for(auto j : rightsub){
                    TreeNode * temp = new TreeNode(k);
                    temp -> left = i;
                    temp -> right = j;
                    subTree.push_back(temp);
                }
            }
        }
        return subTree;
    }
};
// @lc code=end

