class Solution {
public:
    int titleToNumber(string s) {
        
        int n = s.length(), sum = 0;
        
        for(int i = 0; i<n; i++) {
        
            sum*=26;
            sum+=(s[i]-'A')+1;
        
        }
        return sum;
    }
};