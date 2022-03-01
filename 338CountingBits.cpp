//338. Counting Bits
class Solution {
    int cnt(int i) {
        int ct = 0;
        while(i){
            ct+=(i%2);
            i/=2;
        }
        return ct;
    }
    
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i = 0; i<=n; i++)
            v.push_back(cnt(i));
        return v;
    }
};