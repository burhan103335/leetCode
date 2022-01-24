/* DFS solution */
class Solution {
    
    vector<int> v;
    int val, l, h;
    
    void calc(int val, int i)
    {
        if(i>9) return;
        val = val*10 + i;
        if(val>h) return;
        if(val>=l && val<=h) v.push_back(val);
        calc(val, i+1);
    }
    
public:
    vector<int> sequentialDigits(int low, int high) {
        l = low, h = high;
        for(int i = 1; i<9; i++)
            calc(i, i+1);
        
        sort(v.begin(), v.end());
        
        return v;
    }
};