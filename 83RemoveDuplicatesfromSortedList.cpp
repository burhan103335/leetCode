/**
 * 83. Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* tmp = head;
        while(head->next != nullptr) {
            if(head->val == head->next->val){
                head->next = head->next->next;
            }else head = head->next;
        }
        return tmp;
    }
};