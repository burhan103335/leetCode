class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        height.push_back(0);
        
        int n = height.size(), tp, tp_val, area=0;
        stack <int> s;
        /*
        while(i<n){
            if(s.empty() || heights[s.top()] <= heights[i]) s.push(i++);
            else{
                tp = s.top();
                tp_val = heights[tp];
                s.pop();
                tp  = s.empty() ? -1 : tp;
                area = max(area, tp_val * (i-tp-1));
            }
        }
        */
        
        for (int i = 0; i < n; i++) {
            while (!s.empty() && height[s.top()] > height[i]) {
                int h = height[s.top()]; s.pop();
                int l = s.empty() ? -1 : s.top();
                area = max(area, h * (i - l - 1));
            }
            s.push(i);
        }
        return area;
        
        return area;
    }
};