class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int cnt= 0, ans;

        for(int num : nums) {

            if(cnt == 0) {
                ans = num;
                cnt ++;
            }
            else if (num == ans) cnt ++;
            else cnt --;
        }

        return ans;
    }
};