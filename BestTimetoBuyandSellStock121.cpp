class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0, mn = prices[0] ,cm = prices[0], n = prices.size();
        for(int i = 1; i<n; i++)
        {
            if(mn>prices[i]) mn = cm = prices[i];
            cm = max(cm, prices[i]);
            mx = max(mx, cm-mn);
        }
        return mx;
    }
};