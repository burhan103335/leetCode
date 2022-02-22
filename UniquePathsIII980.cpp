class Solution {
    
    int sum, m, n, st, ed, em;
    
    void travers(vector<vector<int>>& v, int i, int j, int em){
        
        if(i<0 || j<0 || i>=n || j>= m || v[i][j] == -1 || v[i][j] == 1) return;
        
        
        if(v[i][j]==2) {
            if(em==0) sum ++;
            return;
        }
        else {
            em--;
            v[i][j] = 1;
            
            travers(v, i+1, j, em);
            travers(v, i-1, j, em);
            travers(v, i, j+1, em);
            travers(v, i, j-1, em);
            
            v[i][j] = 0;
        }
        
    }
    
public:
    int uniquePathsIII(vector<vector<int>>& v) {
        
        sum = 0, em = 0;
        
        n = v.size(), m = v[0].size();
        
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                if(v[i][j]==1) {
                    st = i, ed = j;
                    v[i][j] = 0;
                }
                
                else if(v[i][j]==0) em++;
            }
        }
        
        travers(v, st, ed, em+1);
        return sum;
    }
};