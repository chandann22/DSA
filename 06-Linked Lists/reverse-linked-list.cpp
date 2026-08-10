// Problem: Leetcode 206: Reverse Linked List
// Topic: Linked List
// Pattern: Reversal
// Difficulty: Easy

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev  = NULL;
        ListNode* curr = head;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
};
