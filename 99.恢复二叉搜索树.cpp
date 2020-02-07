/*
 * @lc app=leetcode.cn id=99 lang=cpp
 *
 * [99] 恢复二叉搜索树
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
/* public:
    void recoverTree(TreeNode* root) {
      //先中序遍历，再排序，最后重建二叉树
        vector<int> res;
        inorder(root, res);
        sort(res.begin(), res.end());
        recover(root, res);
    }
    void inorder(TreeNode * root, vector<int> &res){
        if(root == nullptr){
            return;
        }
        inorder(root -> left, res);
        res.push_back(root -> val);
        inorder(root -> right, res);
    }
    void recover(TreeNode * root, vector<int> &res){
        if(root == nullptr){
            return;
        }
        recover(root -> left, res);
        if(root -> val = res[0]){
            res.erase(res.begin());
        }else{
            root -> val = res[0];
            res.erase(res.begin());
        }
        recover(root -> right, res);
    }*/
    //中序遍历过程中，记录错误两个错误排序节点，最后进行交换
    TreeNode * t1, * t2, * pre;
    public:
    void recoverTree(TreeNode * root) {
        inorder(root);
        int temp = t1 -> val;
        t1 -> val = t2 -> val;
        t2 -> val = temp;
    }
    void inorder(TreeNode * root){
        if (root == nullptr) return ;
        inorder(root -> left);
        if (pre != nullptr && pre -> val > root -> val) {
            if (t1 == nullptr) t1 = pre;
            t2 = root;
        }
        pre = root;
        inorder(root -> right);
    }
};
// @lc code=end

