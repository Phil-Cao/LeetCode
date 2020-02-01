/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
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
            return head;
        }
        ListNode dummy(INT_MIN);
        dummy.next = head;
        ListNode * prev = &dummy, * cur = head;
        while(cur != nullptr){
            bool dup = false;
            while(cur -> next != nullptr && cur -> val == cur -> next -> val){
                dup = true;
                ListNode * temp =cur;
                cur = cur -> next;
                delete temp;
            }
            if(dup){
                ListNode *temp = cur;
                cur = cur -> next;
                delete temp;
                continue;
            }
            prev -> next = cur;
            cur = cur -> next;
            prev = prev -> next;
        }
        prev -> next = cur;
        return dummy.next;
    }
};
// @lc code=end

