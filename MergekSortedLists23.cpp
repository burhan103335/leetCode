class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        ListNode *res = NULL, *tmp;

        unordered_map<int, int>mp;

        int mx = -100000, mn = 100000;

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
                if(res == NULL) {
                    res = new ListNode(mn);
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