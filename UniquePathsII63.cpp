class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        
        
        int n = v.size(), m = v[0].size();
        v[0][0] = v[0][0] ? 0 : 1;
        
        for(int i = 1; i<n; i++) v[i][0] = v[i-1][0] && !v[i][0] ? 1 : 0;
        for(int i = 1; i<m; i++) v[0][i] = v[0][i-1] && !v[0][i] ? 1 : 0;
        
        for(int i = 1; i<n; i++) {
            for(int j = 1; j<m; j++) {
                v[i][j] = v[i][j] ? 0 : v[i-1][j] + v[i][j-1]; 
            }
        }
        
        return v[n-1][m-1];
    }
};