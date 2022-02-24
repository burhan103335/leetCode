class Solution {
    map<int, int>mp;
    
    void tavers(ListNode* head) {
        if(head == nullptr) return;
        
        ++mp[head->val];
        tavers(head->next);
    }
    
    
public:
    ListNode* sortList(ListNode* head) {
        mp.clear();
        tavers(head);
        int c = 0;
        ListNode* ans = nullptr, *tmp;
        
        for(auto it : mp){
            if(!c) {
                ans = new ListNode(it.first);
                tmp = ans;
                it.second--;
                c = 1;
            }
            while(it.second){
                tmp->next = new ListNode(it.first);
                tmp = tmp->next;
                it.second--;
            }
        }
        return ans;
    }
};