//799. Champagne Tower
class Solution {
public:
    double champagneTower(int a, int row, int g) {
        double ans[101][101] = {0.0}, q;
        ans[0][0] = a;
        for(int i = 0; i<=row; i++){
            for(int j = 0; j<=i; j++){
                q = (ans[i][j]-1.0)/2.0;
                if(q>0.0){
                    ans[i+1][j] += q;
                    ans[i+1][j+1] += q;
                }
            }
        }
        return min(1.0, ans[row][g]);
    }
};