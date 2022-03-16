//946. Validate Stack Sequences
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int n = pushed.size(), j = 0;
        for(int i= 0; i<n; i++){
            while(!st.empty() and st.top()==popped[j]){
                j++;
                st.pop();
            }
            st.push(pushed[i]);
        }
        while(!st.empty() and st.top()==popped[j]){
                j++;
                st.pop();
        }
        return st.empty();
    }
};