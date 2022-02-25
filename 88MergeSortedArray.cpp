// 88. Merge Sorted Array leetcode problem solve 25 Feb 2022
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i  = m+n-1; m--, n--;
        while(n>=0 && m>=0) {
            if(nums1[m]>nums2[n]) nums1[i]  =  nums1[m--];
            else nums1[i]  =  nums2[n--];
            i--;
        }
        while(n>=0) nums1[i--] = nums2[n--];
    }
};