class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int> pq;
        int mn = INT_MAX, mx, res = INT_MAX, tmp = 1;
        for(int i = 0; i<n; i++) {
            if(nums[i]%2) nums[i] *= 2;
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
            
            pq.push(nums[i]);
        }
        while(pq.top()%2==0) {
            res = min(res, pq.top()-mn);
            pq.push(pq.top()/2);
            mn = min(mn, pq.top()/2);
            pq.pop();
        }
        return res = min(res, pq.top()-mn);
        
    }
};