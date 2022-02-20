class Solution {
    vector<string>ans;
    void backTrack(int n, int open, int end, string s){
        if(open == n && end ==  n) {
            ans.push_back(s);
            return;
        }
        
        if(open<n) {
            s.push_back('(');
            backTrack(n, open+1, end, s);
            s.pop_back();
        }
        if(end<open) {
            s.push_back(')');
            backTrack(n, open, end+1, s);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        ans.clear();
        backTrack(n, 0, 0, "");
        return ans;
    }
};