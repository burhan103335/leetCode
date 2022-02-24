class Solution {
public:
    ListNode* marge(ListNode* first, ListNode* tmp){
        ListNode* ans = new ListNode();
        ListNode* cur = ans;
        while(first != nullptr && tmp != nullptr){
            if(first->val < tmp->val){
                cur->next = first;
                first = first->next;
            }
            else {
                cur->next = tmp;
                tmp = tmp->next;
            }
            cur = cur->next;
        }
        
        if(first != nullptr) cur->next = first;
        if(tmp != nullptr) cur->next = tmp;
        
        return ans->next;
    }
    
    
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        
        
        ListNode* tmp, *mid, *first;
        mid = head;
        tmp = head->next;
        while(tmp!=nullptr && tmp->next != nullptr) {
            mid = mid->next;
            tmp = tmp->next->next;
        }
        first = head, tmp = mid->next, mid->next = nullptr;
        
        first = sortList(first), tmp = sortList(tmp);
        return marge(first, tmp);
    }
};