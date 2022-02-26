//350 Intersection of Two Arrays II
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>mp;
        vector<int>v;
        for(int num : nums1) mp[num+1]++;
        for(int num : nums2) {
            if(mp[num+1]) {
                v.push_back(num);
                mp[num+1]--;
            }
        }
        return v;
    }
};