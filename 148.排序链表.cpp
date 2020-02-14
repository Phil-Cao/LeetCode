/*
 * @lc app=leetcode.cn id=148 lang=cpp
 *
 * [148] 排序链表
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
    ListNode* sortList(ListNode* head) {
        //归并排序时间复杂度O（n logn），双链表适合快排
        if(head == nullptr || head -> next == nullptr){
            return head;
        }
        ListNode * fast = head;
        ListNode * slow = head;
        while(fast -> next != nullptr && fast -> next -> next != nullptr){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        fast = slow -> next;
        slow -> next = nullptr;
        ListNode * l1 = sortList(head);
        ListNode * l2 = sortList(fast);
        return mergeTwoLists(l1, l2);
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr){
            return l2;
        }
        if(l2 == nullptr){
            return l1;
        }
        ListNode dummy(-1);
        ListNode * p = &dummy;
        for(; l1 != nullptr && l2 != nullptr; p = p -> next){
            if(l1 -> val < l2 -> val){
                p -> next = l1;
                l1 = l1 -> next;
            }else{
                p -> next = l2;
                l2 = l2 -> next;
            }
        }
        p -> next = l1 != nullptr ? l1 : l2;
        return dummy.next;
    }
};
// @lc code=end

