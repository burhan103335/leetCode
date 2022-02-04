class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size(), sum = 0, mx = 0;
        
        unordered_map<int,int>mp;
        
        mp[0] = -1;
        
        for(int i = 0; i<n; i++){
            sum += (nums[i] == 1 ? 1 : -1);
            
            if(mp.find(sum) == mp.end()) mp[sum] = i;
            
            else mx = max(mx, i-mp[sum]);
        }
        return mx;
    }
};