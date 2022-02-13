/* Bracktracking */

class Solution {
    vector<vector<int> > v;
    int n;
    
    void backTrack(vector<int> tmp , int pos, vector<int>nums){
        if(pos>=n) return;
        tmp.push_back(nums[pos++]);
        v.push_back(tmp);
        while(pos<n){
            backTrack(tmp, pos, nums);
            pos++;
        }
    }
    
    
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        v.clear();
        v.push_back({});
        n = nums.size();
        
        for(int i = 0; i<n; i++){
            vector<int> tmp;
            backTrack(tmp, i, nums);
            
        }
        
        return v;
    }
};