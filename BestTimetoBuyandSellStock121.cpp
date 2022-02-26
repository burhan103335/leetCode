//121 Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX, mx = 0;
        for(int price: prices){
            mn = price < mn ? price : mn;
            mx = price - mn < mx ? mx : price-mn;
        }
        return mx;
    }
};