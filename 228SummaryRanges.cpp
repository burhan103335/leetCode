// 228. Summary Ranges
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    
        int n = nums.size(), cnt = 0;
        if(n==0) return {};
        vector<string>v;
        string s = to_string(nums[0]);
        
        for(int i = 1; i<n; i++) {
            if((long long)nums[i] - nums[i-1] == 1) cnt++;
            else {
                if(cnt){
                    s+="->";
                    s += to_string(nums[i-1]);
                }
                cnt = 0;
                v.push_back(s);
                s = to_string(nums[i]);
            }
        }
        if(cnt){
            s+="->";
            s += to_string(nums[n-1]);
        }
        v.push_back(s);
        return v;
    }
};