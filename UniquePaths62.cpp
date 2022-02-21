class Solution {
public:
    int uniquePaths(int m, int n) {
        int ar[n+2][m+2];
        for(int i = 0; i<m; i++) ar[0][i] = 1;
        
        for(int i = 0; i<n; i++) ar[i][0] = 1;
        
        for(int i = 1; i<n; i++) {
            for(int j = 1; j<m; j++) {
                ar[i][j] = ar[i][j-1] + ar[i-1][j];
            }
        }
        return ar[n-1][m-1];
    }
};