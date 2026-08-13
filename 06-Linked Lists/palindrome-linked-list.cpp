// Problem: Leetcode 234: Palindrome Linked List
// Topic: Linked List
// Pattern: Fast and Slow Pointers + Reversal
// Difficulty: Easy

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL && head->next==NULL){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* last = reverse(slow->next);
        ListNode* first = head;
        while(last!=NULL){
            if(first->val != last->val){
                return false;
            }
            first = first->next;
            last = last->next;
        }
        return true;
    }
};
