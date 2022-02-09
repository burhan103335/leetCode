class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int cnt = 0;
        unordered_map<int, int>mp;
        
        if(k==0){
            for(int x : nums){
                if(mp[x]==1) cnt++;
                mp[x]++;
            }
        }
        else{
            for(int x : nums){
                if(mp[x]) continue;
                cnt += mp[x-k];
                cnt += mp[k+x];
                mp[x] = 1;
            }
        }
        return cnt;
    }
};