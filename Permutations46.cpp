class Solution {
    void allPermutation(vector<vector<int>>& ans, vector<int>nums, int pos){
        if(pos==nums.size()) {
            ans.push_back(nums);
            return;
        }
        for(int i = pos; i<nums.size(); i++){
            swap(nums[i], nums[pos]);
            allPermutation(ans, nums, pos+1);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        allPermutation(ans, nums, 0);
        return ans;
    }
};