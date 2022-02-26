//350 Intersection of Two Arrays II
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        
        for(int i = 0; i<nums1.size(); i++){
            for(int j = 0; j<nums2.size(); j++) {
                if(nums1[i]==nums2[j]) {
                    nums2[j] = -1;
                    v.push_back(nums1[i]);
                    break;
                }
            }
        }
        
        return v;
    }
};