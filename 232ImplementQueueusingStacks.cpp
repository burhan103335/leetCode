//232. Implement Queue using Stacks
class MyQueue {
public:
    stack<int>st, ans;
    MyQueue() {
        while(!st.empty()) st.pop();
        while(!ans.empty()) ans.pop();
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        if(ans.empty()){
            while(!st.empty()){
                ans.push(st.top());
                st.pop();
            }
        }
        int res = ans.top();
        ans.pop();
        return res;
    }
    
    int peek() {
        if(ans.empty()){
            while(!st.empty()){
                ans.push(st.top());
                st.pop();
            }
        }
        return ans.top();
    }
    
    bool empty() {
        return ans.empty() and st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */