/**
 * 141
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int ans = INT_MAX;
        while(head != nullptr) {
            if(head->val == ans) return 1;
            head->val  = ans;
            head = head->next;
        }
        return 0;
    }
};