/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }

    ListNode * prev = head;
    ListNode * cur = head -> next;
    while(cur){
        if(prev -> val == cur -> val){
            ListNode * temp = cur;
            prev -> next = cur -> next;
            cur = cur -> next;
            delete temp;
        }else{
            prev = cur;
            cur = cur -> next;
        }
    }
    return head;

    }
};
// @lc code=end

