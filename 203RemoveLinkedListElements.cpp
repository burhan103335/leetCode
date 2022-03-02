/**
 * 203. Remove Linked List Elements
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
    void crate(ListNode* head, int val){
        while(head != nullptr and head->next != nullptr){
            if(head->next->val == val) head->next = head->next->next;
            else head = head->next;
        }
        
    }
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != nullptr && head->val == val) head = head->next;
        crate(head, val);
        return head;
    }
};