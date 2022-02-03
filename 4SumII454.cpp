class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size(), cnt = 0, sum;
        unordered_map<int, int>mp;
        
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
                mp[nums4[i]+ nums3[j]]++;
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                sum = 0 - (nums1[i]+ nums2[j]);
                cnt+=mp[sum];
            }
        }
        return cnt;
    }
};