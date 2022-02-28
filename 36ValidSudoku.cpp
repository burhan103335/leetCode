// 36. Valid Sudoku
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int val;
        for(int i = 0; i<9; i++) {
            vector<bool>v(9,0), v1(9,0);
            for(int j = 0; j<9; j++) {
                
                if(board[i][j] != '.'){
                    val = board[i][j]-'0';
                    if(v[val]) return 0;
                    v[val] = 1;
                }
                if(board[j][i] != '.') {
                    val = board[j][i]-'0';
                    if(v1[val]) return 0;
                    v1[val] = 1;
                }
            }
        }
        for(int i = 0; i<9; i+=3){
            for(int j  = 0; j<9; j+=3) {
                vector<bool>v(9,0);
                for(int k=i; k<i+3; k++){
                    for(int l = j; l<j+3; l++) {
                        if(board[k][l] != '.'){
                            val = board[k][l]-'0';
                            if(v[val]) return 0;
                            v[val] = 1;
                        }
                    }
                }
            }
        }
        return 1;
    }
};