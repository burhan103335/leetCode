//1. Two Sum leetcode problem solve 25 Feb 2022 using map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i = 0; i<nums.size(); i++) {
            if(mp[target-nums[i]]) return {mp[target-nums[i]]-1, i};
            mp[nums[i]] = i+1;
        }
        return {0,1};
    }
};