//856. Score of Parentheses
class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char>st;
        stack<int>st1;
        int tmp = 0, ans = 0, n = s.length();
        
        for(int i = 0; i<n; i++){
            if(s[i]=='('){
                if(tmp==0) st.push('(');
                else {
                    tmp = 0;
                    st.push('+');
                    st.push('(');
                    st1.push(ans);
                    ans = 0;
                }   
            }
            else {
                if(tmp == 0) {
                    ans = 1;
                    tmp = 1;
                    st.pop();
                }else{
                    while(!st.empty() and st.top()=='+'){
                        ans+=st1.top();
                        st1.pop();
                        st.pop();
                    }
                    ans*=2;
                    st.pop();
                }
            }
        }
        while(!st.empty() and st.top()=='+'){
            ans+=st1.top();
            st1.pop();
            st.pop();
        }
        return ans;
    }
};