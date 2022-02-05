/* Another Solution Divide And Conquer recurtion */

class Solution {
public:
    
    ListNode * marge2list(ListNode *l1, ListNode *l2){
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        
        ListNode *head = new ListNode(l1->val < l2->val ? l1->val : l2->val);
        head->next = l1->val < l2->val ? marge2list(l1->next, l2) : marge2list(l1, l2->next);
        return head;
        
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            lists.push_back(marge2list(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        
        return lists[0];
    }
};