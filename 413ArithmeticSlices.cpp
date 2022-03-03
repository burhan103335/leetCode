//413. Arithmetic Slices
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int cnt = 0, dif, ans = 0, n = nums.size();
        if(n<3) return 0;
        dif = nums[1] - nums[0];
        for(int i = 2; i<n; i++) {
            if(nums[i]-nums[i-1] == dif) cnt++;
            else {
                ans += ((cnt * (cnt+1))/2);
                cnt = 0;
                dif = nums[i] - nums[i-1];
            }
        }
        ans += ((cnt * (cnt+1))/2);
        return ans;
    }
};