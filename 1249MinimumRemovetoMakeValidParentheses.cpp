//1249. Minimum Remove to Make Valid Parentheses
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int cnt = 0, n = s.length();
        
        for(int i = 0; i<n; i++){
            if(cnt==0 and s[i] == ')') s[i] = '.';
            else if(s[i]=='(') cnt++;
            else if(s[i]==')') cnt--;
        }
        for(int i = n-1; i>=0; i--) {
            if(s[i]=='(' and cnt){
                s[i] = '.';
                cnt--;
            }
        }
        string ans = "";
        for(int i = 0; i<n; i++){
            if(s[i]=='.') continue;
            else ans+=s[i];
        }
        return ans;
    }
};