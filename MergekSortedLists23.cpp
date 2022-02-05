class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode *res = NULL, *tmp;
        
        unordered_map<int, int>mp;
        
        int mx = -100000, mn = 100000, tp = 1;
        
        for(auto list : lists){
            while(list != NULL){
                mx = max(mx, list->val);
                mn = min(mn, list->val);
                mp[list->val]++;
                list = list->next;
            }
        }
        
        
        
        while(mn<=mx){
            while(mp[mn]){
                if(tp){
                    res = new ListNode(mn);
                    tp = 0;
                    tmp = res;
                }
                else {
                    tmp->next = new ListNode(mn);
                    tmp = tmp->next;
                }
                mp[mn]--;
            }
            mn++;
        }
        return res;
    }
};