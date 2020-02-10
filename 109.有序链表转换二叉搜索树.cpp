/*
 * @lc app=leetcode.cn id=109 lang=cpp
 *
 * [109] 有序链表转换二叉搜索树
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode * root;
        if(!head){
            return nullptr;
        }

        if(!head -> next){
            root = new TreeNode(head -> val);
            return root;
        }

        ListNode * fast = head;
        ListNode * slow = head;
        ListNode * prev = head;

        while(fast != nullptr && fast -> next != nullptr){
            fast = fast -> next -> next;
            slow = slow -> next;
        }

        while(prev -> next != slow){
            prev = prev -> next;
        }
        root = new TreeNode(slow -> val);
        ListNode * headRight = slow -> next;
        prev -> next = nullptr;
        root -> left = sortedListToBST(head);
        root -> right = sortedListToBST(headRight);

        return root;
    }
};
// @lc code=end

