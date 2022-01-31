class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        int mx = 0; int m = v.size(), n = v[0].size(), sum;
        for(int i = 0; i<m; i++){
            sum = 0;
            for(int j = 0; j<n; j++) sum+=v[i][j];
            mx = max(mx, sum);
        }
        return mx;
    }
};