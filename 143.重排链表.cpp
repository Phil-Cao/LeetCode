/*
 * @lc app=leetcode.cn id=143 lang=cpp
 *
 * [143] 重排链表
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
    void reorderList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr){
            return;
        }

        ListNode *slow = head, *fast = head, *prev = nullptr;
        while(fast && fast -> next){
            prev = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        prev -> next = nullptr;

        slow = reverse(slow);

        ListNode * cur = head;
        while(cur -> next){
            ListNode * temp = cur -> next;
            cur -> next = slow;
            slow = slow -> next;
            cur -> next -> next = temp;
            cur = temp;
        }
        cur -> next = slow;
    }

    ListNode * reverse(ListNode * head){
        if(head == nullptr || head -> next == nullptr){
            return head;
        }

        ListNode * prev = head;
        ListNode * cur = head -> next, *next = cur -> next;
        while(cur){
            cur -> next = prev;
            //prev -> next = next;
            prev = cur;
            cur = next;
            next = next ? next -> next : nullptr;
        }
        head -> next = nullptr;
        return prev;
    }
};
// @lc code=end

