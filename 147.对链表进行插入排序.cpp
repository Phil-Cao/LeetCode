/*
 * @lc app=leetcode.cn id=147 lang=cpp
 *
 * [147] 对链表进行插入排序
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
    ListNode* insertionSortList(ListNode* head) {
        ListNode dummy(-1);
        dummy.next = head;
        while(head != nullptr && head -> next != nullptr){
            if(head -> val <= head -> next -> val){
                head = head -> next;
                continue;
            }
            ListNode * pre = &dummy;
            while(pre -> next -> val < head -> next -> val){
                pre = pre -> next;
            }
            ListNode * cur = head -> next;
            head -> next = cur -> next;
            cur -> next = pre -> next;
            pre -> next = cur;
        }
        return dummy.next;
    }
};
// @lc code=end

